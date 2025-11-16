#include <SFML/Graphics.hpp>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <functional>
#include <iostream>

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
void draw_grid(sf::RenderWindow &window, UniqueContainer<Point, PointHash> &points, Vec2 &offset)
{
    window.clear(sf::Color::Black);
    for (auto &p : points.data())
    {
        sf::RectangleShape rectangle({offset.zoom, offset.zoom});
        rectangle.setPosition({p.x + offset.x, p.y + offset.y});
        window.draw(rectangle);
    }
}

int main()
{
    Vec2 offset = {10.f, 0.f, 0.f};
    UniqueContainer<Point, PointHash> points;

    sf::VideoMode desktopMode = sf::VideoMode::getDesktopMode();
    int desktopWidth = desktopMode.size.x;
    int desktopHeight = desktopMode.size.y;

    sf::RenderWindow window(sf::VideoMode({800, 600}), "My Window");
    int appWidth = window.getSize().x;
    int appHeight = window.getSize().y;

    window.setPosition({desktopWidth / 2 - appWidth / 2, desktopHeight / 2 - appHeight / 2});
    window.setFramerateLimit(60);
    // run the program as long as the window is open
    while (window.isOpen())
    {
        // clears window on resize
        draw_grid(window, points, offset);

        window.display();

        // check all the window's events that were triggered since the last iteration of the loop
        while (const std::optional event = window.pollEvent())
        {
            // "close requested" event: we close the window
            if (event->is<sf::Event::Closed>())
                window.close();

            else if (event->is<sf::Event::Resized>())
            {
                appWidth = window.getSize().x;
                appHeight = window.getSize().y;
            }

            else if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
            {
                // left mouse button is pressed: shoot
                sf::Vector2i localMousePos = sf::Mouse::getPosition(window);
                points.insert({localMousePos.x, localMousePos.y});
                // cells.insert(c);
            }

            else if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Right))
            {
                std::cout << "Points:" << std::endl;
                for (auto &p : points.data())
                {
                    std::cout << p.x << ", " << p.y << std::endl;
                }
            }

            else if (event->is<sf::Event::MouseWheelScrolled>())
            {
                const auto *wheelEv = event->getIf<sf::Event::MouseWheelScrolled>();
                offset.zoom += wheelEv->delta;
            };
        };
    }

    return 0;
}
