//
// Created by denis on 20.02.18.
//

#include <fstream>

#ifndef HACKER_TYPER_TEXT_COUNTER_H_H
#define HACKER_TYPER_TEXT_COUNTER_H_H

unsigned text_counter(std::fstream file)
{

    unsigned count = 0;

    count = file.gcount();

    return count;
}


#endif //HACKER_TYPER_TEXT_COUNTER_H_H
