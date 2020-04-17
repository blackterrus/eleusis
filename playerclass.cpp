using namespace std;

class player{
	private:
		int player_hand[], player_score;//int array for the player's hand. thinking of doing numerals for the cards ex. 1209 is a red, hearts, 9.
	public:
		void playerDraw(int), playerPlace(); //playerDraw() - card is added to player_hand[]. playerPlace() - card is removed from hand and placed on table.
		player(); //constructor needs to build the player's hand
		~player(); //destructor will erase all data held in class player
}pc;

player::player(){
	//setHand()	- calls player_hand[] and sets the array with 15 cards (0-14)
}
	