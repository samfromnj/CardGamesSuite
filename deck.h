#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <vector>

class Deck
{
public:
    Deck(int val = 1);
    std::string transcodeSuit(int);
    std::string transcodeFace(int);
    void draw();
    void shuffle();
    void printDeck();

private:
    std::vector<std::vector<int>> deck;
};

#endif // DECK_H
