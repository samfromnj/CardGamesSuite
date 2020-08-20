#include "card.h"
#include "deck.h"

#include <algorithm>
#include <ctime>
#include <iostream>
#include <vector>

Deck::Deck(int shoeSize /*= 1*/)
{
    Card ghost;// = new Card();
    for(int suit = 0; suit < NUM_SUITS; suit++)
    {
        for(int face = 0; face < DECK_SIZE/NUM_SUITS; face++)
        {
            for(int shoe = 0; shoe < shoeSize; shoe++)
            {
                ghost.assignSuit(suit);
                ghost.assignFace(face);
                deck.push_back(ghost);
            }
        }
    }
}

Card Deck::draw()
{
  Card card(deck.back());
  deck.pop_back();
  return card;
}

void Deck::printDeck()
{
    for(std::vector<Card>::iterator it = deck.begin(); it != deck.end(); it++)
        std::cout << it->printCard() << std::endl;
}

void Deck::shuffle()
{
    std::srand(unsigned(std::time(nullptr)));
    std::random_shuffle(std::begin(deck), std::end(deck));
}
