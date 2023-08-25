// Simulate Poker Game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constants
#define SUITS 4
#define FACES 13
#define CARDS 52
#define HANDS 10
#define PLAYER_CARDS 5

// prototypes
void shuffle(unsigned int Deck[SUITS][FACES]);
void deal(unsigned int Deck[SUITS][FACES], const char *Face[], const char *Suit[]);
void dealHands(unsigned int Deck[SUITS][FACES], const char *Face[], const char *Suit[]);

int containsPair(unsigned int Hand[PLAYER_CARDS][2]);
int containsTwoPair(unsigned int Hand[PLAYER_CARDS][2]);
int containsThreeOfKind(unsigned int Hand[PLAYER_CARDS][2]);
int containsFourOfKind(unsigned int Hand[PLAYER_CARDS][2]);
int containsFlush(unsigned int Hand[PLAYER_CARDS][2]);
int containsStraight(unsigned int Hand[PLAYER_CARDS][2]);

// Main Function That Begin Program Execution
int main(void)
{

	// Initialzation Phase
	unsigned int Deck[SUITS][FACES] = {0};
	const char *Suits[SUITS] = {
		"Hearts",
		"Diamonds",
		"Clubs",
		"Spades"};
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
		"King"};

	// Processing Phase
	srand(time(NULL)); // Seed Random-Number Generator
	shuffle(Deck);

	// Termination Phase
	// deal(Deck, Faces, Suits);
	dealHands(Deck, Faces, Suits);

	return 0;

} // End Main

// Shuffle The Deck
void shuffle(unsigned int Deck[SUITS][FACES])
{

	// for each of the cards, choose slot of deck randomly
	for (size_t card = 1; card <= CARDS; card++)
	{
		size_t row;
		size_t column;

		// Choose new random location until empty slot found
		do
		{
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
	for (size_t card = 1; card <= CARDS; card++)
	{

		// loop through rows of deck
		for (size_t row = 0; row < SUITS; row++)
		{

			// loop through columns of deck
			for (size_t column = 0; column < FACES; column++)
			{

				// if slot contains current card
				if (Deck[row][column] == card)
				{

					printf("%-5s of %-8s%c", Face[column], Suit[row], card % 5 == 0 ? '\n' : '\t');

				} // End If

			} // End Child Loop

		} // End Parent Loop

	} // End Grand Loop

} // End Deal

// Deal For Each Hand
void dealHands(unsigned int Deck[SUITS][FACES], const char *Face[], const char *Suit[])
{

	unsigned int hand[PLAYER_CARDS][2];

	// Iterate On Each Player
	for (size_t player = 0; player < HANDS; player++)
	{

		// Display Player Number
		printf("\nPlayer %d's Hand:\n", player + 1);

		// Iterate On Each Player Card
		for (size_t card = 0; card < PLAYER_CARDS; card++)
		{

			size_t row, column;

			// find an unassigned card in the deck
			do
			{
				row = rand() % SUITS;
				column = rand() % FACES;
			} while (Deck[row][column] == 0);

			// Assign the card to the player's hand
			hand[card][0] = row;
			hand[card][1] = column;

			// mark the card as assigned in the deck
			Deck[row][column] = 0;

			// print the card
			printf("%-5s of %-8s%c", Face[column], Suit[row], card % 5 == 4 ? '\n' : '\t');

		} // End Inner Loop
		// Evaluate and display the player's hand
		if (containsPair(hand))
		{
			printf("Player %d has a pair!\n", player + 1);
		}
		else if (containsTwoPair(hand))
		{
			printf("Player %d has a Two pair!\n", player + 1);
		}

		if (containsThreeOfKind(hand))
		{
			printf("Player %d has a Three Kind!\n", player + 1);
		}

		if (containsFourOfKind(hand))
		{
			printf("Player %d has a Four Kind!\n", player + 1);
		}

		if (containsFlush(hand))
		{
			printf("Player %d has a Flush!\n", player + 1);
		}

		if (containsStraight(hand))
		{
			printf("Player %d has a Straight!\n", player + 1);
		}
	} // End Outer Loop

} // End Deal Hand

// Check Player Cards Functions

int containsPair(unsigned int Hand[PLAYER_CARDS][2])
{

	int faceCount[FACES] = {0};

	for (size_t i = 0; i < PLAYER_CARDS; i++)
	{

		int face = Hand[i][1];
		faceCount[face]++;
	}

	for (size_t i = 0; i < FACES; i++)
	{

		if (faceCount[i] == 2)
		{
			return 1;
		}
	}

	return 0;

} // End Pair

int containsTwoPair(unsigned int Hand[PLAYER_CARDS][2])
{

	int faceCount[FACES] = {0};

	for (size_t i = 0; i < PLAYER_CARDS; i++)
	{
		int face = Hand[i][1]; // Get the face value of the card
		faceCount[face]++;
	}

	int pairs = 0;

	for (size_t i = 0; i < FACES; i++)
	{
		if (faceCount[i] == 2)
		{
			pairs++;
		}
	}

	return (pairs == 2);

} // End TwoPaires

int containsThreeOfKind(unsigned int Hand[PLAYER_CARDS][2])
{

	int faceCount[FACES] = {0};
	
	for (size_t i = 0; i < PLAYER_CARDS; i++)
	{
		int face = Hand[i][1];
		faceCount[face]++;
	}

	for (size_t i = 0; i < FACES; i++)
	{
		if (faceCount[i] == 3)
		{
			return 1;
		}
	}

	return 0;

} // End ThreeOfAKind

int containsFourOfKind(unsigned int Hand[PLAYER_CARDS][2])
{

	int faceCount[FACES] = {0};

	for (size_t i = 0; i < PLAYER_CARDS; i++)
	{
		int face = Hand[i][1];
		faceCount[face]++;
	}

	for (size_t i = 0; i < FACES; i++)
	{
		if (faceCount[i] == 4)
		{
			return 1;
		}
	}

	return 0;

} // End FourOfAKind

int containsFlush(unsigned int Hand[PLAYER_CARDS][2])
{

	int suitCount[SUITS] = {0};

	for (size_t i = 0; i < PLAYER_CARDS; i++)
	{
		int suit = Hand[i][0];
		suitCount[suit]++;
	}

	for (size_t i = 0; i < SUITS; i++)
	{
		if (suitCount[i] == 5)
		{
			return 1;
		}
	}

	return 0;

} // End Flush

int containsStraight(unsigned int Hand[PLAYER_CARDS][2])
{
    // Sort the hand by face values in ascending order
    for (size_t i = 0; i < PLAYER_CARDS - 1; i++)
    {
        for (size_t j = 0; j < PLAYER_CARDS - i - 1; j++)
        {
            if (Hand[j][1] > Hand[j + 1][1])
            {
                // Swap the cards
                unsigned int temp_suit = Hand[j][0];
                unsigned int temp_face = Hand[j][1];
                Hand[j][0] = Hand[j + 1][0];
                Hand[j][1] = Hand[j + 1][1];
                Hand[j + 1][0] = temp_suit;
                Hand[j + 1][1] = temp_face;
            }
        }
    }

    // Check for a straight
    for (size_t i = 0; i < PLAYER_CARDS - 1; i++)
    {
        if (Hand[i][1] + 1 != Hand[i + 1][1])
        {
            return 0; // Not a straight
        }
    }

    return 1; // Found a straight

} // End Straight