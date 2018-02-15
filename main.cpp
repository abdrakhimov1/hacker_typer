#include <iostream>
#include <SFML/Graphics.hpp>



int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "FirstWindow");
    sf::Font font;
    sf::Event event;
    font.loadFromFile("arial.ttf");

    while (window.isOpen()) {

    sf::Text text;
    text.setFont(font);
    text.setString("It is my text!");
    text.setCharacterSize(18);
    text.setColor(sf::Color::Green);

        window.clear();
        window.draw(text);
        window.display();


    while (window.pollEvent(event)) {
        if (event.type == sf::Event::KeyPressed) {
            std::cout << "Key is pressed\n";

        }
    }
    }

  return 0;
}