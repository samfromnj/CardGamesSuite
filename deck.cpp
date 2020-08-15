#include "card.h"
#include "deck.h"

#include <algorithm>
#include <ctime>
#include <iostream>
#include <vector>

Deck::Deck(int shoeSize /*= 1*/)
{
    /*
    const int deckSize = 52;
    const int numSuits = 4;
    Card *ghost;

    for(int suit = 0; suit < numSuits; suit++)
    {
        for(int face = 0; face < deckSize/numSuits; face++)
        {
            for(int shoe = 0; shoe < shoeSize; shoe++)
            {
                ghost->assignSuit(suit);
                ghost->assignFace(face);
                deck.push_back(*ghost);
            }
        }
    }
    */
}
/*




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
*/
