#pragma once
#include <iostream>
using namespace std; 

struct Card
{
    int face; 
    int suit; 
    public: 
    Card(int a, int b) : face(a), suit(b) { }
    Card() : face(-1), suit(-1) { }
    string call_card_name(); 
}; 

string Card::call_card_name()
{
    string face_string; 
    string suit_string; 
    string card_name; 
    if (face == 1) face_string = "Ace";
    else if (face == 11) face_string = "Jack";  
    else if (face == 12) face_string = "Queen";  
    else if (face == 13) face_string = "King";  
    else face_string = to_string(face); 

    if (suit == 1) suit_string = "hearts"; 
    else if (suit == 2) suit_string = "spade"; 
    else if (suit == 3) suit_string = "clubs"; 
    else if (suit == 4) suit_string = "diamonds"; 
    card_name = face_string + " of " + suit_string; 
    return card_name; 
}