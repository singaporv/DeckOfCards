#pragma once
#include <iostream>
#include "cards.h"
#include <vector>
#include <assert.h> 
using namespace std; 

const int CARDS_PER_DECK = 52; 

class Deck
{
    vector<Card> deck_of_cards; 
    Card curr_card; 
    public: 
    Deck(); 
    void print_deck(); 
    void shuffle(); 
    Card* deal_card(); 
}; 

Deck::Deck()
{
    for (int num= 0; num< CARDS_PER_DECK;  ++num)
    {
        deck_of_cards.emplace_back(Card((num % 13)+ 1, (num /13) + 1)); 
    }
}

/* This function prints the deck order*/
void Deck::print_deck()
{
    for (int itr = 0; itr<deck_of_cards.size(); ++itr)
        cout<<deck_of_cards[itr].call_card_name()<<"\n"; 
}

/* This function shuffles the deck */
void Deck::shuffle()
{
    assert(deck_of_cards.size() == CARDS_PER_DECK); 
    for (int i= 0; i< CARDS_PER_DECK; ++i)
    {
        int j = (rand() + time(0)) % CARDS_PER_DECK; 
        Card temp = deck_of_cards[i]; 
        deck_of_cards[i] = deck_of_cards[j]; 
        deck_of_cards[j] = temp; 
    }
}

/* This function returns the pointer to the last card in 
the deck and removes it from the list */
Card* Deck::deal_card()
{
    if (deck_of_cards.empty())
        return nullptr; 
    curr_card = deck_of_cards.back(); 
    deck_of_cards.pop_back(); 
    return &curr_card; 
}