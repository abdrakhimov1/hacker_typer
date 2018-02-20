//
// Created by ruby on 20.02.18.
//
#include <SFML/Graphics.hpp>
#include "read_into_buf.h"


#ifndef HACKER_TYPER_TEXT_DRAWING_H
#define HACKER_TYPER_TEXT_DRAWING_H

std::string lay_out_text;
sf::Font font;
sf::Event event;
long int lett_counter = 0;
int lines_counter = 0;




void draw_wind(unsigned char buf[]){

    sf::RenderWindow window(sf::VideoMode(1300, 600), "My window", sf::Style::Close);


    while (window.isOpen()) {

        sf::Text text;
        text.setFont(font);
        text.setString(lay_out_text);
        text.setCharacterSize(18);
        text.setColor(sf::Color::Green);

        window.clear();
        window.draw(text);
        window.display();



        while(window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            if (event.type == sf::Event::KeyPressed) {


                for (short int i = 0; i < 5; i++) {

                    if (buf[lett_counter + i] == 59) {
                        lay_out_text += buf[lett_counter + i];
                        lay_out_text += "\n\t\t\t";
                        lines_counter += 1;

                    } else if (lines_counter == 21) {
                        lay_out_text = ' ';
                        lines_counter = 0;
                        i -= 1;

                    } else if (buf[lett_counter + i] == 125) {
                        lay_out_text += buf[lett_counter + i];
                        lay_out_text += "\n\t\t\t";

                    } else if (buf[lett_counter + i] == 123) {
                        lay_out_text += buf[lett_counter + i];
                        lay_out_text += "\n\t\t\t";
                        lines_counter += 1;
                    } else {
                        lay_out_text += buf[lett_counter + i];
                    }
                }
                lett_counter += 5;


            }


        }
    }
}

#endif //HACKER_TYPER_TEXT_DRAWING_H
