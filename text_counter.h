//
// Created by denis on 20.02.18.
//
#include <iostream>
#include <string>
#include <fstream>

#ifndef HACKER_TYPER_TEXT_COUNTER_H_H
#define HACKER_TYPER_TEXT_COUNTER_H_H

unsigned text_counter(std::string adress)
{
    std::ifstream file (""); //FIXIT
    std::string str;
    //std::string adress;
    unsigned counter = 0;

    //file.open(adress);

    counter = str.size();

    file.close();

    return counter;

}


#endif //HACKER_TYPER_TEXT_COUNTER_H_H
