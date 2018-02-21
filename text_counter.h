//
// Created by denis on 20.02.18.
//

#include <string>
#include <fstream>

#ifndef HACKER_TYPER_TEXT_COUNTER_H_H
#define HACKER_TYPER_TEXT_COUNTER_H_H

unsigned text_counter(ifstream file)
{
    ifstream file;
    std::string str;
    std::string adress;
    unsigned counter = 0;

    getline(std::cin, adress);
    file.open(adress);

    counter = str.size();

    file.close();

    return counter;

}


#endif //HACKER_TYPER_TEXT_COUNTER_H_H
