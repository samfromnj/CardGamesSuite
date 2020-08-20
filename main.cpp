#include <iostream>

#include "card.h"
#include "deck.h"

int main()
{
    Deck myDeck;
    myDeck.shuffle();
    myDeck.printDeck();

    Card myCard = myDeck.draw();
    std::cout << myCard.printCard() << std::endl;

    myCard = myDeck.draw();
    std::cout << myCard.printCard() << std::endl;

    myCard = myDeck.draw();
    std::cout << myCard.printCard() << std::endl;

    return EXIT_SUCCESS;
}
