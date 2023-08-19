// ############################################################################# Guessing Number Game #########################################################################
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // To Generate The Random Number
#include <string.h> // To Use String Built-In Functions

// Main Function That Begin The Excution Of The Program
int main( void )
{

	// Initialzation Phase
	int guessedNumber, randomNumber, lifes;
	enum difficulty {Easy = 5, Normal = 10, Hard = 15, Dragon = 25};
	enum difficulty userDifficulty;
	char userInput[10];

	// Processing Phase
	// Displaying Instructions
	puts("______________________Guess The Number Game!_______________________\n");
	puts("###################################################################\n");
	puts("Be Careful With The Number Of Your Lifes 😉");
	puts("The More Lifes You Have The More Diffculty Will Be 🥶");
	puts("\n###################################################################\n");
	puts("\t\t\tBest Wishes 👉👈\n");
	// Get Lifes Value From The User
	printf("Enter How Many Lifes You Want: ");
	scanf("%i", &lifes);	

	// Difficulty Flow
	while (1) 
	{
		// Get Difficulty Level
		printf("\nEnter The Difficulty Of The Game [ Easy, Normal, Hard, Dragon ] : ");
		scanf("%s", userInput);
		
		// Assign Difficulty Level
		if (strcmp(userInput, "Easy") == 0) {
			userDifficulty = Easy;
			printf("\nWe Got a Baby Here 😂\n");
			break;  // Exit the loop on successful input
		} // End If
		
		else if (strcmp(userInput, "Normal") == 0) {
			userDifficulty = Normal;
			printf("\nGood Boy 😉\n");
			break;  // Exit the loop on successful input
		} // End Else If
		
		else if (strcmp(userInput, "Hard") == 0) {
			userDifficulty = Hard;
			printf("\nDats My Maaan 🔥🥶\n");
			break;  // Exit the loop on successful input
		} // End Else If
		
		else if (strcmp(userInput, "Dragon") == 0) {
			userDifficulty = Dragon;
			printf("\nBro WTF! 💀\n");
			break;  // Exit the loop on successful input
		} // End Else If
		
		else {
			printf("\n👉Invalid difficulty choice. Please choose from Easy, Normal, Hard, or Dragon Please.👈\n");
		} // End Else 
	}

	// Generate Random Number
	time_t t;
	srand( (unsigned) time(&t));
	randomNumber = rand() % (lifes * userDifficulty);
	

	// Display The Number Range
	printf("\nChoose a number Between 1 and %i\n", (lifes * userDifficulty));	

	// Get Guessed Number From User
	printf("\nYou Have %i Lifes For This Round :)\n\n", lifes);
	printf("Enter a Guess: ");
	scanf("%i", &guessedNumber);

	// Game Flow
	while (1) 
	{
		printf("\n%i\n", randomNumber);

		// Handle Ran Of Lifes
		if (lifes == 1) {
			// Better UX
			if (abs(guessedNumber - randomNumber) > 10){
				printf("\nYou May Wanna Try Baby Mode 🤣\n");
			} 
			else {
				printf("\nYou Were Close Good Luck Next Time Soldier 🫡\n");
			}
    		printf("\n\t\t\tOut of lives -_-. The correct number was %d.\n", randomNumber);
			break;
		} // End If
	
		// Number Checking ...
		if ( guessedNumber < randomNumber){
			--lifes;
			// Display Lifes
			printf("\nYou Have %i Lifes Left :)", lifes);	

			puts("\nThe Number is Bigger");
			printf("Enter a Guess: ");
			scanf("%i", &guessedNumber);				
		} // End If

		else if ( guessedNumber > randomNumber ){
			--lifes;
			// Display Lifes
			printf("\nYou Have %i Lifes Left :)", lifes);	
			
			puts("\nThe Number is Lower");
			printf("Enter a Guess: ");
			scanf("%i", &guessedNumber);
		} // End Else If

		else if ( guessedNumber == randomNumber ){
			puts("\n Congrats! :)");
			break;
		} // End Else If

	} // End While Loob

	return 0;	

} // End Main Function
