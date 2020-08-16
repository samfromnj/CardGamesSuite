#include <iostream>

#include "card.h"
#include "deck.h"

//using namespace std;

int main()
{

    Deck *myDeck = new Deck();
    //myDeck->shuffle();
    myDeck->printDeck();

    /*
    Card *myCard = new Card();
    myCard->assignSuit(hearts);
    std::cout << myCard->transcodeSuit() << std::endl;
    myCard->assignSuit(6);
    std::cout << myCard->transcodeSuit() << std::endl;
    myCard->assignSuit(clubs);
    std::cout << myCard->transcodeSuit() << std::endl;
    myCard->assignSuit(spades);
    std::cout << myCard->transcodeSuit() << std::endl;

    std::cout << myCard->printCard() << std::endl;
    */
    return 0;
}
