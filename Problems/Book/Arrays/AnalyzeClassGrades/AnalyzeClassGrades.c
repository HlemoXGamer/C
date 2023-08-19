// Class Grades Analaysis
#include <stdio.h>
#include <stdlib.h>

#define ROWSIZE 20
#define COLSIZE 7

// Main Function That Begin Program Execution
int main(void)
{

	// Initialzation Phase
	 int studentsGrades[ROWSIZE][COLSIZE] = {
    	{51, 52, 53, 54, 55, 56, 57},
      {58, 59, 60, 61, 62, 63, 64},
      {65, 66, 67, 68, 69, 70, 71},
      {72, 73, 74, 75, 76, 77, 78},
      {79, 80, 81, 82, 83, 84, 85},
      {86, 87, 88, 89, 90, 91, 92},
      {93, 94, 95, 96, 97, 98, 99},
      {51, 52, 53, 54, 55, 56, 57},
      {58, 59, 60, 61, 62, 63, 64},
      {65, 66, 67, 68, 69, 70, 71},
      {72, 73, 74, 75, 76, 77, 78},
      {79, 80, 81, 82, 83, 84, 85},
      {86, 87, 88, 89, 90, 91, 92},
      {93, 94, 95, 96, 97, 98, 99},
      {51, 52, 53, 54, 55, 56, 57},
      {58, 59, 60, 61, 62, 63, 64},
      {65, 66, 67, 68, 69, 70, 71},
      {72, 73, 74, 75, 76, 77, 78},
   	{79, 80, 81, 82, 83, 84, 85}
	};
	
	char *names[ROWSIZE] = {
      "Olivia",
      "Liam",
      "Sophia",
      "Noah",
      "Emma",
      "Jackson",
      "Alaa",
      "Aiden",
      "Isabella",
      "Lucas",
      "Mia",
      "Ethan",
      "Harper",
      "Ava",
      "Amelia",
      "Oliver",
      "Evelyn",
      "Elijah",
      "Charlotte",
      "Benjamin"
   };
	
	char *subjects[ROWSIZE] = {
		"Arabic",
		"English",
		"France",
		"Chemistry",
		"Physics",
		"Biology",
		"Geology"
	};
	
	int studentTotal = 0;
	int subjectsTotal[COLSIZE];
	int subjectsAverage[COLSIZE];
	int total[ROWSIZE];

	// Processing Phase
	// Calc Total For Each Student
	for (int i = 0; i < ROWSIZE; i++){
		total[i] = 0;
		for (int j = 0; j < COLSIZE; j++){
			studentTotal += studentsGrades[i][j];
			total[i] = studentTotal;
		} // End Inner Loop
		studentTotal = 0; // Reset Student Value
	} // End Outer Loop

	// Display All Students Grades With Names, Subjects And Total
	// Display Table Header
    printf("\n%-10s  ", "Names");
	for (int i = 0; i < COLSIZE; i++){
        printf("%-10s  ", subjects[i]);
	} // End Loop
    printf("%-10s\n", "Total");
	
	// Display Table Body
	for (int i = 0; i < ROWSIZE - 1; i++){
		printf("%-10s\t", names[i]);
		for (int j = 0; j < COLSIZE; j++){
            printf("%-10d  ", studentsGrades[i][j]);
		} // End Inner Loop
        printf("%-10d\n", total[i]);
	} // End Outer Loop
	
	// Calc Average in each Subject
	for (int i = 0 ; i < COLSIZE; i++){
		subjectsTotal[i] = 0;
		subjectsAverage[i] = 0;
		for (int j = 0; j < ROWSIZE; j++){
			subjectsTotal[i] += studentsGrades[j][i];
			subjectsAverage[i] = subjectsTotal[i] / ROWSIZE;
		} // End Inner Loop
		printf("\n\tThe Average Of %s is %i\n", subjects[i], subjectsAverage[i]);
	} // End Outer Loop		

	// Calc Average For Totals
	int totalAverage = 0;
	for (int i = 0; i < COLSIZE; i++){
		totalAverage += total[i];
	} // End Loop
	printf("\n\tTotal Average Of Entire Class is %i\n",(totalAverage / ROWSIZE));
	
	// Display The Top 1
	int top = 0;
	char *topName;
	for (int i = 0; i < ROWSIZE; i++){
		if(top < total[i]) {
			top = total[i];
			topName = names[i];
		} // End If
	} // End Loop

	// Display The Most Effecient Student
	printf("\n\n\n###############################################################\n\n\n");
	printf("The Winner Is %s 👉👈🍓\tWith Score Of %i Yaay🥳🥳", topName, top);
	printf("\n\n\n###############################################################\n\n\n");
   return 0;

} // End Main