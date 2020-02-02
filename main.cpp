#include<iostream>
#include "cards.h"
#include "deck.h"
using namespace std; 

int main()
{
    Deck seegrid_deck; 
    seegrid_deck.shuffle(); 
    // seegrid_deck.print_deck(); 

    // Dealing all the cards
    for (int i= 0; i< 60; ++i)
    {
        Card* card_ptr = seegrid_deck.deal_card(); 
        if (card_ptr == nullptr) {cout<<"Deck is empty! \n"; continue;} 
        string curr = (*card_ptr).call_card_name(); 
        cout<<curr<<endl; 
    }

    seegrid_deck.shuffle(); 

}
