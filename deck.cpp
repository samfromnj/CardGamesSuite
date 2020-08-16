#include "card.h"
#include "deck.h"

#include <algorithm>
#include <ctime>
#include <iostream>
#include <vector>

Deck::Deck(int shoeSize /*= 1*/)
{
    Card *ghost = new Card();
    for(int suit = 0; suit < NUM_SUITS; suit++)
    {
        for(int face = 0; face < DECK_SIZE/NUM_SUITS; face++)
        {
            for(int shoe = 0; shoe < shoeSize; shoe++)
            {
                ghost->assignSuit(suit);
                ghost->assignFace(face);
                //std::cout << ghost->printCard() << std::endl;
                deck.push_back(*ghost);
            }
        }
    }
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

*/

void Deck::printDeck()    // Review why iterators are used over looping over *.size()
{
    //for(int loc = 0; loc < deck.size(); loc++)
    //    std::cout << (&(deck.at(loc)))->printCard() << std::endl;
    for(std::vector<Card>::iterator it = deck.begin(); it != deck.end(); it++)
        std::cout << (&(deck.at(loc)))->printCard() << std::endl;

    /*
    for (std::vector<Card>::iterator it = deck.begin(); it != deck.end(); it++)
    {
        ghost = &deck(*it);
    }
    */

    //std::cout << "Test" << std::endl;
    //std::cout << ghost->printCard();
    //std::cout << (deck.at(0))->Card::printCard();
    /*

        std::cout << deck(*it)printCard() std::endl;
        //std::cout << Card::transcodeSuit((*it)[0]) << " ";
        //std::cout << Card::transcodeFace((*it)[1]) << std::endl;
    }
    */
}

