#include "tools/eventloop.hpp" //SFML/Graphics.hpp included in eventloop.hpp

int main(int argc, char* argv[])
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Mars Colony");

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color::White);
        window.display();
    }
    return EXIT_SUCCESS;
}
