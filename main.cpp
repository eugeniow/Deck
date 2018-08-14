#include <iostream>
#include <stdlib.h>
#include <time.h>

enum ValueSuit
{
ACE_Hearts = 1,
TWO_Hearts = 2,
THREE_Hearts = 3,
FOUR_Hearts = 4,
FIVE_Hearts = 5,
SIX_Hearts = 6,
SEVEN_Hearts = 7,
EIGHT_Hearts = 8,
NINE_Hearts = 9,
TEN_Hearts = 10,
JACK_Hearts = 11,
QUEEN_Hearts = 12,
KING_Hearts = 13,

	
ACE_Clubs = 14,
TWO_Clubs = 15,
THREE_Clubs = 16,
FOUR_Clubs = 17,
FIVE_Clubs = 18,
SIX_Clubs = 19,
SEVEN_Clubs = 20,
EIGHT_Clubs = 21,
NINE_Clubs = 22,
TEN_Clubs = 23,
JACK_Clubs = 24,
QUEEN_Clubs = 25,
KING_Clubs = 26,

ACE_Hearts = 1,
TWO_Hearts = 2,
THREE_Hearts = 3,
FOUR_Hearts = 4,
FIVE_Hearts = 5,
SIX_Hearts = 6,
SEVEN_Hearts = 7,
EIGHT_Hearts = 8,
NINE_Hearts = 9,
TEN_Hearts = 10,
JACK_Hearts = 11,
QUEEN_Hearts = 12,
KING_Hearts = 13,

ACE_Hearts = 1,
TWO_Hearts = 2,
THREE_Hearts = 3,
FOUR_Hearts = 4,
FIVE_Hearts = 5,
SIX_Hearts = 6,
SEVEN_Hearts = 7,
EIGHT_Hearts = 8,
NINE_Hearts = 9,
TEN_Hearts = 10,
JACK_Hearts = 11,
QUEEN_Hearts = 12,
KING_Hearts = 13,

};

class Card
{
	private:
	uint value;
	Suit suitValue;

	public:
	Card();
	~Card();
	int getHashCode();
	void Print();
	bool setValue(int);
	int getValue();
	bool setSuit(Suit);
	Suit getSuit();

};


Card::Card()  
{
	value=-1;
	suitValue=hearts;
};

Card::~Card()
{
//	std::cout<<"delete card"<<std::endl;
};

void Card::Print()
{
	if(value == 1)
	{
		std::cout<<" Ace ";
	}
	else if ( value % 11 ==0)
	{
		std::cout<<" Jack ";
	}
	else if (value % 12 ==0)
	{
		std::cout<<" Queen ";
	}	
	else if (value % 13 ==0)
	{
		std::cout<<" King " ;
	}
	else
	{
		std::cout<<" "<<value;
	}
};

int Card::getHashCode()
{
	return value;
};

int Card::getValue()
{
	return value;
}

Suit Card::getSuit()
{
	return suitValue;	
}

bool Card::setValue(int v)
{
	value = v;
}

bool Card::setSuit(Suit s)
{

	suitValue = s;
}

class Deck
{
	private:
	Card deck[52];
	bool IsInDeck();

	public:
	Deck();
	~Deck();
	void Shuffle ();
	void Print ();
	bool Deal(Card * /*[out]*/);
};
Deck::Deck()
{
	std::cout<<"create deck"<<std::endl;
	for(int i = 0;i<51;i++)
	{
		for (int j = 0;j<4;j++)
		{
			Card c;
			if(i==0)
			{
			c.setValue(1);
			}
			else
			{
			c.setValue(i);

			}
			c.setSuit((Suit)j); 
			deck[i] = c;
		}
	}
};

void Deck::Print()
{
	
	std::cout<<std::endl;
	for(int i = 0;i<51;i++)
	{
		deck[i].Print();
	}

	std::cout<<std::endl;
};
Deck::~Deck()
{
	//std::cout<<"delete deck"<<std::endl;
};

bool Deck::IsInDeck()
{
	return true;
};


void Deck::Shuffle()
{
	for(int i=1;i<53;i++)
	{
	//	std::cout<<"Value:"<<deck[i].getValue()<<" Suit:"<<deck[i].getSuit()<<std::endl;
	}
};

bool Deck::Deal(Card * d)
{
	int deckSize = sizeof(d);
	bool result  = true;

	if(deckSize == 52)
	{
		for(int i=1;i<53;i++)
		{
			d[i].setValue(deck[i].getValue());
			d[i].setSuit(deck[i].getSuit());
		}
	}
	else
	{
		result = false;
	}
	return result;
}
int main()
{

 Deck d; 

 d.Print();

 return 0;
}
