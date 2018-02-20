//
// Created by ruby on 20.02.18.
//

#ifndef HACKER_TYPER_READ_INTO_BUF_H
#define HACKER_TYPER_READ_INTO_BUF_H

#include <fstream>


    unsigned char read_into_buf(unsigned char buff[]){ //FIXIT buf_size


        std::fstream in("/home/ruby/Documents/MIPT/INFA/MIPT-cpp/hacker_typer/animate.txt");

        for (short i=0; i < 32000; i++) {

            in >> buff[i];}


    }


#endif //HACKER_TYPER_READ_INTO_BUF_H
