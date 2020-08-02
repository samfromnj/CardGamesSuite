#include "deck.h"

#include <algorithm>
#include <ctime>
#include <iostream>
#include <vector>

Deck::Deck(int shoeSize /*= 1*/)
{
    const int deckSize = 52;
    const int numSuits = 4;
    std::vector<int> ghost;

    for(int suit = 0; suit < numSuits; suit++)
    {
        for(int face = 0; face < deckSize/numSuits; face++)
        {
            for(int shoe = 0; shoe < shoeSize; shoe++)
            {
                ghost.push_back(suit);
                ghost.push_back(face);
                deck.push_back(ghost);
                ghost.clear();
            }
        }
    }
}

std::string Deck::transcodeSuit(int suit)
{
    if (suit == 0)
        return "♥";
    else if (suit == 1)
        return "♦";
    else if (suit == 2)
        return "♣";
    else
        return "♠";
}

std::string Deck::transcodeFace(int card)
{
    if (card < 8)
        return std::to_string(card + 2);
    else if (card == 8)
        return "T";
    else if (card == 9)
        return "J";
    else if (card == 10)
        return "Q";
    else if (card == 11)
        return "K";
    else
        return "A";
}

void Deck::draw()
{
    ;
}

void Deck::shuffle()
{
    std::srand(unsigned(std::time(nullptr)));
    std::random_shuffle(std::begin(deck), std::end(deck));
}

void Deck::printDeck()    // Review why iterators are used over looping over *.size()
{
    for (std::vector<std::vector<int>>::iterator it = deck.begin(); it != deck.end(); it++)
    {
        std::cout << transcodeSuit((*it)[0]) << " ";
        std::cout << transcodeFace((*it)[1]) << std::endl;
    }
}
