#include <iostream>

#include "card.h"
#include "deck.h"

//using namespace std;

int main()
{
    Deck *myDeck = new Deck();
    myDeck->shuffle();
    myDeck->printDeck();

    //myDeck->draw();
    return EXIT_SUCCESS;
}
