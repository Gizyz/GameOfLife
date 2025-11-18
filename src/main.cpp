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
int neighbourCheck(UniqueContainer<Point, PointHash> &points, float x, float y)
{
    int count = 0;
    int radius = 1;

    for (float dx = -radius; dx <= radius; dx++)
    {
        for (float dy = -radius; dy <= radius; dy++)
        {
            if (dx == 0 && dy == 0)
                continue;

            Point neighbour{x + dx, y + dy};

            if (points.contains(neighbour))
            {
                count++;
            }
        }
    }
    return count;
}
void board_change(UniqueContainer<Point, PointHash> &points)
{
    vector<Point> toAdd;
    vector<Point> toRemove;

    std::unordered_set<Point, PointHash> checkedPoints;

    for (auto &p : points.data())
    {
        int alive = neighbourCheck(points, p.x, p.y);

        if (alive < 2 || alive > 3)
        {
            toRemove.push_back(p);
        }
        else if (alive == 2 || alive == 3)
        {
            continue;
        }

        for (int dx = -1; dx <= 1; dx++)
        {
            for (int dy = -1; dy <= 1; dy++)
            {
                int nx = p.x + dx;
                int ny = p.y + dy;

                if (dx == 0 && dy == 0)
                    continue;

                Point neighbor{nx, ny};
                if (checkedPoints.find(neighbor) == checkedPoints.end())
                {
                    checkedPoints.insert(neighbor);
                    if (!points.contains(neighbor) && neighbourCheck(points, nx, ny) == 3)
                    {
                        toAdd.push_back(neighbor);
                    }
                }
            }
        }
    }
    for (auto &p : toRemove)
    {
        points.remove(p);
    }
    for (auto &p : toAdd)
    {
        points.insert(p);
    }
}
void line_fill(UniqueContainer<Point, PointHash> &points, sf::Vector2f &prev, sf::Vector2f &current)
{
    sf::Vector2f fill;

    for (float t = 0; t < 1; t += 0.01)
    {
        fill.x = current.x + t * (prev.x - current.x);
        fill.y = current.y + t * (prev.y - current.y);

        points.insert({(int)fill.x, (int)fill.y});
    }
}
void draw_grid(sf::RenderWindow &window, UniqueContainer<Point, PointHash> &points)
{
    sf::VertexBuffer buffer(sf::PrimitiveType::Triangles, sf::VertexBuffer::Usage::Static);

    // Calculate total vertices needed (6 per cell)
    std::vector<sf::Vertex> vertices;
    for (auto &p : points.data())
    {
        // Ensure x and y are cast to float (in case they are integers)
        float x = static_cast<float>(p.x);
        float y = static_cast<float>(p.y);

        // Add two triangles to form a quad (rectangle)
        // First triangle: (top-left, top-right, bottom-left)
        vertices.push_back(sf::Vertex(sf::Vector2f(x, y), sf::Color::Color::White));
        vertices.push_back(sf::Vertex(sf::Vector2f(x + 1, y), sf::Color::White));
        vertices.push_back(sf::Vertex(sf::Vector2f(x, y + 1), sf::Color::White));

        // Second triangle
        vertices.push_back(sf::Vertex(sf::Vector2f(x, y + 1), sf::Color::Cyan));
        vertices.push_back(sf::Vertex(sf::Vector2f(x + 1, y), sf::Color::Cyan));
        vertices.push_back(sf::Vertex(sf::Vector2f(x + 1, y + 1), sf::Color::Cyan));
    }
    if (!buffer.create(vertices.size()))
    {
        std::cerr << "Failed to create vertex buffer!\n";
        return;
    }
    buffer.update(vertices.data());
    window.draw(buffer);
}

int main()
{
    UniqueContainer<Point, PointHash> points;
    bool paused = true;

    sf::VideoMode desktopMode = sf::VideoMode::getDesktopMode();
    int desktopWidth = desktopMode.size.x;
    int desktopHeight = desktopMode.size.y;

    sf::RenderWindow window(sf::VideoMode({800, 600}), "Game of Life");

    int appWidth = window.getSize().x;
    int appHeight = window.getSize().y;

    sf::View camera(
        sf::Vector2f(appWidth / 2.f, appHeight / 2.f), // center
        sf::Vector2f(appWidth * 1.f, appHeight * 1.f)  // size
    );
    Vec2 offset = {0.05f, 0.f, 0.f};
    camera.setSize({appWidth * offset.zoom, appHeight * offset.zoom});

    window.setPosition({desktopWidth / 2 - appWidth / 2, desktopHeight / 2 - appHeight / 2});
    window.setFramerateLimit(60);

    sf::Vector2i prevMousePos;
    sf::Vector2f prevDrawPos;
    bool rightDragging = false;
    bool leftDragging = false;

    // run the program as long as the window is open
    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();

            else if (event->is<sf::Event::Resized>())
            {
                appWidth = window.getSize().x;
                appHeight = window.getSize().y;
            }
            else if (const auto *e = event->getIf<sf::Event::KeyPressed>())
            {
                if (e->scancode == sf::Keyboard::Scancode ::P)
                {
                    if (paused)
                        paused = false;
                    else
                        paused = true;
                }
            }
            else if (const auto *e = event->getIf<sf::Event::MouseButtonPressed>())
            {
                if (e->button == sf::Mouse::Button::Left)
                {
                    leftDragging = true;
                    sf::Vector2i pixel = sf::Mouse::getPosition(window);
                    prevDrawPos = window.mapPixelToCoords(pixel, camera);
                }
                if (e->button == sf::Mouse::Button::Right)
                {
                    rightDragging = true;
                    prevMousePos = sf::Mouse::getPosition(window);
                }
            }
            else if (const auto *e = event->getIf<sf::Event::MouseButtonReleased>())
            {
                if (e->button == sf::Mouse::Button::Left)
                    leftDragging = false;
                if (e->button == sf::Mouse::Button::Right)
                    rightDragging = false;
            }

            else if (const auto *e = event->getIf<sf::Event::MouseWheelScrolled>())
            {
                offset.zoom += e->delta * 0.01f;
                camera.setSize({1.f * appWidth * offset.zoom, 1.f * appHeight * offset.zoom});
            }
        }

        // --- REALTIME INPUT  ---
        // draws points in world cords
        if (leftDragging)
        {
            sf::Vector2i pixel = sf::Mouse::getPosition(window);
            sf::Vector2f world = window.mapPixelToCoords(pixel, camera);

            points.insert({(int)world.x, (int)world.y});
            line_fill(points, prevDrawPos, world);

            prevDrawPos = world;
        }
        // pans screen based on mouse drag
        if (rightDragging)
        {
            sf::Vector2i pos = sf::Mouse::getPosition(window);
            sf::Vector2i delta = pos - prevMousePos;
            prevMousePos = pos;
            offset.x -= delta.x * offset.zoom;
            offset.y -= delta.y * offset.zoom;
            camera.move({-delta.x * offset.zoom, -delta.y * offset.zoom});
        }
        // --- Simulation update (moved out of drawing) ---
        if (!paused && !leftDragging)
            board_change(points);

        // --- Rendering ---
        window.clear();
        window.setView(camera);
        draw_grid(window, points); // now draw only
        window.display();
    }
    return 0;
}
