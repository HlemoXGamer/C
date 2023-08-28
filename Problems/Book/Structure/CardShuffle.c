// Card Shuffle With Struct
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constants
#define CARDS 52
#define FACES 13

struct card {
    const char *face; // define pointer face
    const char *suit; // define pointer suit
};
typedef struct card Card; // new type name for struct card

// Function Prototypes
void fillDeck(Card *const Deck, const char *Face[], const char *Suit[]);
void shuffle(Card *const Deck);
void deal(const Card *const Deck);

// Main Function
int main(void) {

    Card deck[CARDS]; // define array of Cards

    // initialize array of pointers
    const char *face[] = {"Ace", "Deuce", "Three", "Four","Five","Six", "Seven",
                          "Eight", "Nine", "Ten","Jack", "Queen", "King"};

    const char *suit[] = { "Hearts", "Diamonds", "Clubs", "Spades"};

    srand(time(NULL));

    fillDeck(deck, face, suit);
    shuffle(deck);
    deal(deck);

} // End Main

// Place Strings into card structures
void fillDeck(Card * const Deck, const char * Face[], const char * Suit[])
{
    // loop through Deck
    for (size_t i = 0; i < CARDS; i++)
    {
        Deck[i].face = Face[i % FACES];
        Deck[i].suit = Suit[i / FACES];
    }

} // End Fill Deck

// Shuffle Cards
void shuffle(Card * const Deck)
{
    // loop through Deck randomly swapping Cards
    for (size_t i = 0; i < CARDS; i++)
    {
        size_t j = rand() % CARDS;
        Card temp = Deck[i];
        Deck[i] = Deck[j];
        Deck[j] = temp;
    }

} // End Shuffle

// deal cards
void deal(const Card * const Deck)
{
    // loop through Deck
    for (size_t i = 0; i < CARDS; i++)
    {
        printf("%5s of %-8s%s", Deck[i].face, Deck[i].suit, (i + 1) % 4 ? " " : "\n");
    }
} // End Deal