/* I dont have my compiler set up for this so I can't compile.
*  I know that this is probably is the incorrect way to do this, but It makes sense to me
*  Thehe getter is what is confusing ,e the most. I can't figure out how to pass the pointer from the setter to this function to set the player_hand from card_transfer
*  I am using a for loop to set the first 15 cards (0-14) to the card_transer cariable
*/



#ifndef PLAYERCLASS_CPP_
#define PLAYERCLASS_CPP_
#include "../include/Deck.h"
#include <vector>

class player{
  private:
    typedef std::vector<class player> player_hand;
	int player_score;
	
  public:
  
    //getter: used to place the data where it needs to go.
	const toHand(const &card_transfer)
	{
	  player_hand = &card_transfer;
	};
	
	//setter: used to initialize a vector or other data structure with data
	void fromDeck(std::vector<transfer*> const &card_transfer)
	{
	  for (int i=0; i<=14; i++) 
	    card_transfer.push_back(deck_[i]) 
	};
	
	
	player(); //constructor needs to build the player's hand
	~player(); //destructor will erase all data held in class player
		
}pc; 

#endif


//getters and setters from the deck to the hand (encapsulation: preventing private members from being changed unexpectedly)
//vectors for the player_hand
//for (int i=0; i<14; i++) 
//  player_hand.push_back(deck_[i]); 



