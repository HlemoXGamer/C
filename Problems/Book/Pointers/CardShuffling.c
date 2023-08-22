// Card Shuffling
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Pesudo Code
/*

	initialize the suit array
	initialize the face array
	initialize the deck array
	
	For each of the 52 cards
		choose slot of deck randomly
		while slot of deck previously chosen
			chose slot of deck randomly
		place card number in chosen slot of deck

	For each of the 52 cards
		For each row of deck rows
			For each column in deck columns
				print the face and suit of the card

*/

#define SUITS 4
#define FACES 13
#define CARDS 52

// Functions Prototype
void shuffle(unsigned int Deck[SUITS][FACES]); // Shuffling modifies wDeck
void deal (unsigned int Deck[SUITS][FACES], const char *Face[], const char *Suit[]); // Dealing without modify the arrays

// Main Function That Begin Program Execution
int main(void)
{

	// Initialzation Phase
	unsigned int deck[SUITS][FACES] = {0};

	// Proccessing Phase
	srand(time(NULL));
	shuffle(deck); // shuffle the deck	

	const char *suit[SUITS] =  {"Hearts", "Diamonds", "Clubs", "Spades"};
	const char *face[FACES] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

	// Termination Phase
	deal(deck, face, suit);

   return 0;

} // End Main

// Shuffle Cards in deck
void shuffle(unsigned int Deck[SUITS][FACES])
{

	// for each of the cards, choose slot of deck randomly
	for (size_t card = 1; card <= CARDS; card++) {
		size_t row;
		size_t column;

		// Choose new random location until unoccupied slot found
		do {
			row = rand() % SUITS;
			column = rand() % FACES;
		} while (Deck[row][column] != 0);

		// place card number in chosen slot of deck
		Deck[row][column] = card;
	} // End For Loop	

} // End Shuffle Function

// Deal Cards in deck
void deal(unsigned int Deck[SUITS][FACES], const char *Face[], const char *Suit[])
{

	// deal each of the cards
	for (size_t card = 1; card <= CARDS; card++) {
		// loop through rows of Deck
		for (size_t row = 0; row < SUITS; row++) {
			// loop through columns of Deck for the current row
			for (size_t column = 0; column < FACES; column++) {
				// If slot contains current card, display The card
				if (Deck[row][column] == card) {
					printf("%5s of %-8s%c", Face[column], Suit[row], card % 2 == 0 ? '\n': '\t'); // 2 Column Format
				} // End If
			} // End Child Loop
		} // End Parent Loop
	} // End Grand Loop

}






















