#ifndef CARD_H
#define CARD_H

#include <iostream>

enum suit {hearts, diamonds, clubs, spades};
enum face {jack = 10, queen = 11, king = 12, ace = 13};

class Card
{
public:
    Card();
    short int getSuit();
    short int getFace();
    int assignSuit(short int);
    int assignFace(short int);
    std::string transcodeSuit();
    std::string transcodeFace();

private:
    short int suit;
    short int face;
};

#endif // CARD_H
