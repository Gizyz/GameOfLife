#include <SFML/Graphics.hpp>
#include <unordered_map>

using namespace std;

void draw_grid(sf::RenderWindow &window) {
        window.clear(sf::Color::Black);

        sf::RectangleShape rectangle({20.f, 20.f});
        window.draw(rectangle);
    }

struct Cell {
    int x, y;
};


int main() {
    unordered_map<int, Cell> cells;

    sf::VideoMode desktopMode = sf::VideoMode::getDesktopMode();

    int desktopWidth = desktopMode.size.x;
    int desktopHeight = desktopMode.size.y;


    sf::RenderWindow window(sf::VideoMode({800, 600}), "My Window");
    int appWidth = window.getSize().x;
    int appHeight = window.getSize().y;

    window.setPosition({desktopWidth/2 - appWidth/2, desktopHeight/2 - appHeight/2});
    window.setFramerateLimit(60);
    // run the program as long as the window is open
    while (window.isOpen())
    {
        //clears window on resize
        draw_grid(window);
                
        window.display();
        
        // check all the window's events that were triggered since the last iteration of the loop
        while (const optional event = window.pollEvent())
        {
            // "close requested" event: we close the window
            if (event->is<sf::Event::Closed>())
                window.close();


            if (event->is<sf::Event::Resized>()) {
                appWidth = window.getSize().x;
                appHeight = window.getSize().y;
            }
            
            if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
            {
                // left mouse button is pressed: shoot
                sf::Vector2i localMousePos = sf::Mouse::getPosition(window);
                Cell c = {localMousePos.x, localMousePos.y};
                //cells.insert(c);
            }

        };
    }

    return 0;
}

