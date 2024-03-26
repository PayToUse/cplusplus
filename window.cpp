#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "Random Number Display");

    int randomNumber = rand() % 121 + 120;

    sf::Font font;
    if (!font.loadFromFile("arial.ttf")) // You can change the font file
    {
        std::cerr << "Failed to load font" << std::endl;
        return 1;
    }

    the random number
    sf::Text text(std::to_string(randomNumber), font, 24);
    text.setFillColor(sf::Color::White);
    text.setPosition(50, 50);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(text);
        window.display();
    }

    return 0;
}
