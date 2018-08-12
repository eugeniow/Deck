#include <iostream>

enum Suit
{
	hearts = 0, clubs = 1, spades = 2, diamonds = 3
	
};

class Card
{
	private:
	int value;

	public:
	Card();
	~Card();
	int getHashCode();
	int getValue();
	Suit getSuit();

};


Card::Card()  
{
	value=-1;
};

Card::~Card()
{
};

int Card::getHashCode()
{

	return value;
};


class Deck
{
	private:
	Card deck[];
	bool IsInDeck();

	public:
	Deck();
	~Deck();
	Card * Shuffle ();
};
Deck::Deck()
{
};

Deck::~Deck()
{
};

bool Deck::IsInDeck()
{
	return true;
};

Card * Deck::Shuffle()
{
 	return deck;
};

int main()
{

 Card *c = new Card();
 Deck *d = new Deck();

 delete c;
 delete d;
 return 0;
}
