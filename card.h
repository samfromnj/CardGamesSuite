#ifndef CARD_H
#define CARD_H

#include <iostream>

#define NUM_SUITS 4
#define DECK_SIZE 54

enum suit {hearts, diamonds, clubs, spades};
enum face {jack = 9, queen = 10, king = 11, ace = 12};

class Card
{
public:
    Card();
    short int getSuit();
    short int getFace();
    void assignSuit(short int);
    void assignFace(short int);
    std::string transcodeSuit();
    std::string transcodeFace();
    std::string printCard();

private:
    short int suit;
    short int face;
};

#endif // CARD_H
