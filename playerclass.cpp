/*
 * Let's take a look at what's going on here:
 * 1. Never import a full namespace. Import only what you need (e.g. I need cout, so I import std::cout) to avoid bloat
 * 2. That entire class player{...} declaration should be in a separate header file
 * 3. int player_hand[] shouldn't compile. Arrays without size are supposed to be impossible. Remember, C++ is a compiled language.
 * 4. I'm not a fan of multiple declarations on one line. It's cleaner to do it on separate lines.
 * 5. The players hand is a little more nuanced than a simple array.
 *	- An integer only allows for consideration of value, and in the game suit is also important
 *      - A struct with fields for value and suit is a better solution
 *
 * VERDICT: We need to work on the python formatting, but for the most part your class is conceptually pretty accurate
 *	    in terms of understanding (i.e. public member functions, private member fields, etc.)
 */

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
	
