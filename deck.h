#ifndef DECK_H
#define DECK_H

#include "card.h"

#include <iostream>
#include <vector>

class Deck
{
public:
    Deck(int val = 1);
    void printDeck();
    void shuffle();
    Card draw();

private:
    std::vector<Card> deck;
};

#endif // DECK_H
