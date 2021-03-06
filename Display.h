//
// Created by Alexis on 12/04/17.
//

#ifndef KAMISADO_DISPLAY_H
#define KAMISADO_DISPLAY_H

#include "Case.h"
#include "Board.h"
#include "Pion.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class Display {
public:
    sf::Sound sound1;
    sf::Sound sound2;
    sf::Sound sound3;
    std::string val = "";
    int tailleWin = 70;
    int ugh = 1;
    Board b;
    bool tour = true;
    std::string name1 = "";
    std::string name2 = "";
    void quit();
    void init();
    //void song();
    //void test();
    void GraphBoard();
private:
     sf::RenderWindow window;
     float rotate = 0;
     float rot = 0;
};

#endif //KAMISADO_DISPLAY_H