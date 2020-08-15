#include <cstdlib>
#include <stdexcept>
#include "card.h"

#define NUM_SUITS 4
#define DECK_SIZE 54

Card::Card()
{
    suit = -1;
    face = -1;
}

short int Card::getSuit()
{
    return suit;
}

short int Card::getFace()
{
    return face;
}

int Card::assignSuit(short int val)
{
    if(val >= 0 && val < NUM_SUITS)
    {
        suit = val;
        return EXIT_SUCCESS;
    }
    else
    {
        std::cerr << "ERROR: Invalid Suit." << std::endl;
    }
}

int Card::assignFace(short int val)
{
    if(val >= 0 && val < DECK_SIZE / NUM_SUITS)
    {
        face = val;
        return EXIT_SUCCESS;
    }
    else
    {
        std::cerr << "ERROR: Invalid Face Value." << std::endl;
        return EXIT_FAILURE;
    }
}

std::string Card::transcodeSuit()
{
    if (getSuit() == 0)
        return "♥";
    else if (getSuit() == 1)
        return "♦";
    else if (getSuit() == 2)
        return "♣";
    else if (getSuit() == 3)
        return "♠";
}

std::string Card::transcodeFace()
{
    if (card->getFace() < 8)
        return std::to_string(card + 2);
    else if (card->getFace() == 8)
        return "T";
    else if (card->getFace() == 9)
        return "J";
    else if (card->getFace() == 10)
        return "Q";
    else if (card->getFace() == 11)
        return "K";
    else
        return "A";
}
