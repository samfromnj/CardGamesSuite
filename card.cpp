#include "card.h"

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

void Card::assignSuit(short int val)
{
    if(val >= 0 && val < NUM_SUITS)
        suit = val;
    else
        std::cerr << "ERROR: Invalid Suit. Possibly Unassigned." << std::endl;
}

void Card::assignFace(short int val)
{
    if(val >= 0 && val < DECK_SIZE / NUM_SUITS)
        face = val;
    else
        std::cerr << "ERROR: Invalid Face Value. Possibly Unassigned." << std::endl;
}

std::string Card::transcodeSuit()
{
    if (getSuit() == 0)
        return "♥";
    else if (getSuit() == 1)
        return "♦";
    else if (getSuit() == 2)
        return "♣";
    else
        return "♠";
}

std::string Card::transcodeFace()
{
    if (getFace() < 8)
        return std::to_string(getFace() + 2);
    else if (getFace() == 8)
        return "T";
    else if (getFace() == jack)
        return "J";
    else if (getFace() == queen)
        return "Q";
    else if (getFace() == king)
        return "K";
    else
        return "A";
}

std::string Card::printCard()
{
    return transcodeFace() + transcodeSuit();
}
