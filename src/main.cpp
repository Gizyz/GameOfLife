#include <SFML/Graphics.hpp>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <functional>
#include <iostream>
#include <cmath>

using namespace std;

// Example struct: 2D Point
struct Point
{
    int x, y;

    bool operator==(const Point &other) const
    {
        return x == other.x && y == other.y;
    }
};

// Hash function for Point
struct PointHash
{
    size_t operator()(const Point &p) const
    {
        return hash<int>()(p.x) ^ (hash<int>()(p.y) << 1);
    }
};

// Template container for unique elements
template <typename T, typename Hash = hash<T>>
class UniqueContainer
{
public:
    bool check(const T &element)
    {
        auto it = set_.find(element);
        if (it == set_.end())
            return false;
        return true;

    }
    // Insert element if it doesn't already exist
    bool insert(const T &element)
    {
        auto result = set_.insert(element);
        if (result.second)
        {
            vec_.push_back(element);
        }
        return result.second;
    }

    // Remove element if it exists
    bool remove(const T &element)
    {
        auto it = set_.find(element);
        if (it == set_.end())
            return false;

        // Remove from vector using swap-and-pop (fast)
        auto vit = find(vec_.begin(), vec_.end(), element);
        if (vit != vec_.end())
        {
            swap(*vit, vec_.back());
            vec_.pop_back();
        }

        set_.erase(it);
        return true;
    }

    // Access all elements for iteration/modification
    vector<T> &data() { return vec_; }
    const vector<T> &data() const { return vec_; }

    // Check if element exists
    bool contains(const T &element) const
    {
        return set_.find(element) != set_.end();
    }

    // Get number of elements
    size_t size() const { return vec_.size(); }

private:
    vector<T> vec_;              // For fast iteration
    unordered_set<T, Hash> set_; // For uniqueness & fast lookup
};
struct Vec2
{
    float zoom, x, y;
};
int neightbourCheck(UniqueContainer<Point, PointHash> &points, float x, float y) {
    int count = 0;
    int radius = 1;
    for (int dx = -radius; dx <= radius; dx++) {
        for (int dy= -radius; dy <= radius; dy++) {
            if (dx == 0 && dy == 0) continue;

            Point neightbour{x+dx, y+dy};
            if (points.contains(neightbour)){
                count++;
            }
        }
    }
    return count;
}
void board_change(UniqueContainer<Point, PointHash> &points){
    vector<Point> toAdd;
    vector<Point> toRemove;

    for (auto &p : points.data()) {
        int alive = neightbourCheck(points, p.x, p.y);

        if (alive < 2){
            toRemove.push_back(p);
        } else if (alive == 2 || alive == 3) {
            continue;
        } else if (alive > 3){
            toRemove.push_back(p);
        }

        for (int dx = -1; dx <= 1; dx++) {
            for (int dy= -1; dy <= 1; dy++) {
                int nx = p.x + dx;
                int ny = p.y + dy;

                if (dx == 0 && dy == 0) continue;
                
                Point nPt{nx, ny};

                if(!points.contains(nPt)) {
                    int nai = neightbourCheck(points, nx, ny);

                    if (nai == 3) toAdd.push_back(nPt);
                }
            }
        }      
    }
    for (auto& p: toRemove) {
        points.remove(p);
    }
    for (auto& p: toAdd) {
        points.insert(p);
    }
}
void draw_grid(sf::RenderWindow &window, UniqueContainer<Point, PointHash> &points, bool &paused)
{
    window.clear(sf::Color::Black);
    if (not paused){
    board_change(points);}
    for (auto &p : points.data())
    {
        sf::RectangleShape rectangle({1.f, 1.f});
        rectangle.setPosition({p.x, p.y});
        window.draw(rectangle);
    }
}

int main()
{
    UniqueContainer<Point, PointHash> points;
    bool paused = true;
    cout << "hallo";
    sf::VideoMode desktopMode = sf::VideoMode::getDesktopMode();
    int desktopWidth = desktopMode.size.x;
    int desktopHeight = desktopMode.size.y;

    sf::RenderWindow window(sf::VideoMode({800, 600}), "My Window");
    int appWidth = window.getSize().x;
    int appHeight = window.getSize().y;

    sf::View camera(
        sf::Vector2f(appWidth / 2.f, appHeight / 2.f),   // center
        sf::Vector2f(appWidth * 1.f, appHeight * 1.f)    // size
    );   
    Vec2 offset = {0.05f, 0.f, 0.f};
    camera.setSize({appWidth * offset.zoom, appHeight * offset.zoom});

    window.setPosition({desktopWidth / 2 - appWidth / 2, desktopHeight / 2 - appHeight / 2});
    window.setFramerateLimit(60);
    
    sf::Vector2i prevMousePos;
    bool rightDragging = false;
    bool leftDragging = false;

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // clears window on resize
        draw_grid(window, points, paused);

        window.setView(camera);
        window.display();



        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();

            else if (event->is<sf::Event::Resized>())
            {
                appWidth = window.getSize().x;
                appHeight = window.getSize().y;
            }
            else if (const auto* e = event->getIf<sf::Event::KeyPressed>()) {
                if (e->scancode  == sf::Keyboard::Scancode ::P){
                    if (paused){
                        paused = false;
                    } else {
                        paused = true;
                    }
                     
                }
            }

            // --- Handle mouse button presses ---
            else if (const auto* e = event->getIf<sf::Event::MouseButtonPressed>())
            {
                if (e->button == sf::Mouse::Button::Left)
                {
                    leftDragging = true;          
                    sf::Vector2i MousePos = { e->position.x, e->position.y };
                    sf::Vector2f worldPos = window.mapPixelToCoords(MousePos, camera);
                    points.insert({ static_cast<int>(std::round(worldPos.x)), 
                                    static_cast<int>(std::round(worldPos.y)) });     
                }
                else if (e->button == sf::Mouse::Button::Right)
                {
                    rightDragging = true;
                    prevMousePos = { e->position.x, e->position.y };
                }
            }

            else if (const auto* e = event->getIf<sf::Event::MouseButtonReleased>())
            {
                if (e->button == sf::Mouse::Button::Right)
                    rightDragging = false;
                if (e->button == sf::Mouse::Button::Left)
                    leftDragging = false;
            }

            // --- Smooth panning using mouse move events ---
            else if (const auto* e = event->getIf<sf::Event::MouseMoved>())
            {
                if (rightDragging)
                {
                    sf::Vector2i pos(e->position.x, e->position.y);

                    sf::Vector2i delta = pos - prevMousePos;
                    prevMousePos = pos;

                    offset.x -= delta.x * offset.zoom;
                    offset.y -= delta.y * offset.zoom;
                    camera.move({-delta.x * offset.zoom, -delta.y * offset.zoom});
                }
                if (leftDragging)
                {
                    sf::Vector2i MousePos = { e->position.x, e->position.y };
                    sf::Vector2f worldPos = window.mapPixelToCoords(MousePos, camera);
                    points.insert({ static_cast<int>(std::round(worldPos.x)), 
                                    static_cast<int>(std::round(worldPos.y)) });                

                }
            }

            // --- Zoom ---
            else if (const auto* e = event->getIf<sf::Event::MouseWheelScrolled>())
            {
                int wheelDelta = e->delta;
                offset.zoom += 1.f * wheelDelta * 0.01f;
                camera.setSize({appWidth * offset.zoom, appHeight * offset.zoom});
            }
            window.setTitle("Game of Life( Paused: " + to_string(paused) + ")");
        }
    }
    return 0;
}
