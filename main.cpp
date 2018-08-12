#include <iostream>

class Card
{
	public:
	int getHashCode()
};

class Deck
{
	public:
	Card [] Shuffle ();
};



int main()
{

 Card *c = new Card();

 delete c;
 return 0;
}
