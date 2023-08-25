// Simulate Poker Game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constants
#define SUITS 4
#define FACES 13
#define CARDS 52
#define HANDS 10

// prototypes
void shuffle(unsigned int Deck[SUITS][FACES]);
void deal(unsigned int Deck[SUITS][FACES], const char *Face[], const char *Suit[]);

// Main Function That Begin Program Execution
int main(void)
{

	// Initialzation Phase
	unsigned	int Deck[SUITS][FACES] = {0};
	const char *Suits[SUITS] = {
		"Hearts",
		"Diamonds",
		"Clubs",
		"Spades"
	};
	const char *Faces[FACES] = {
		"Ace",
		"Deuce",
		"Three",
		"Four",
		"Five",
		"Six",
		"Seven",
		"Eight",
		"Nine",
		"Ten",
		"Jack",
		"Queen",
		"King"
	};

	// Processing Phase
	srand(time(NULL)); // Seed Random-Number Generator
	shuffle(Deck);

	// Termination Phase
	deal(Deck, Faces, Suits);

   return 0;

} // End Main

// Shuffle The Deck
void shuffle(unsigned int Deck[SUITS][FACES])
{

	// for each of the cards, choose slot of deck randomly
	for (size_t card = 1; card <= CARDS; card++) {
		size_t row;
		size_t column;

		// Choose new random location until empty slot found
		do {
			row = rand() % SUITS;
			column = rand() % FACES;
		} while (Deck[row][column] != 0);

		// Place card number in chosen slot
		Deck[row][column] = card;
	} // End For Loop

} // End Shuffle

// deal cards
void deal(unsigned int Deck[SUITS][FACES], const char *Face[], const char *Suit[])
{
	
	// deal each of the cards
	for (size_t card = 1; card <= CARDS; card++) {
		// loop through rows of deck
		for (size_t row = 0; row < SUITS; row++) {
			// loop through columns of deck
			for (size_t column = 0; column < FACES; column++) {
				// if slot contains current card
				if(Deck[row][column] == card) {
					printf("%-5s of %-8s%c", Face[column], Suit[row], card % 5 == 0 ? '\n': '\t');
				} // End If
			} // End Child Loop
		} // End Parent Loop
	} // End Grand Loop

} // End Deal