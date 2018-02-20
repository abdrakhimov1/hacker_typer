#include <iostream>
#include <fstream>
#include <SFML/Graphics.hpp>
#include <sstream>
#include "read_into_buf.h"
#include "text_drawing.h"
#include "text_drawing.h"
#include "text_counter.h"


unsigned char buf[32000];


int main() {

    font.loadFromFile("arial.ttf");
                                            /*UPLOADING STAFF*/
    buf[32000] = read_into_buf(buf);

    draw_wind(buf);

    return 0;
}
