//First program
//Check if leap year
//26/01/2014

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define StartOfGreg 1582

int isLeapYear(int Year);

int main(int argc, char* argv[])
{
	int Year;

	printf("Enter a Year\n");
	scanf("%d", &Year);

	//debut du calendrier greg
	//pas de leap year avant
	assert(Year >= StartOfGreg);

	//check true or false 
	if (isLeapYear(Year) == 1) {
		printf("%d is a leap year\n", Year);
	}
	else
	{
		printf("%d is not a leap year\n", Year);
	}
	return EXIT_SUCCESS;
}

int isLeapYear(int Year)
{

	int leapYear;

	if ((Year % 4) == 0) {
		if ((Year % 100) == 0) {
			if ((Year % 400) == 0) {
				leapYear = 1;
			}
			else
			{
				leapYear = 0;
			}
		}
		else
		{
			leapYear = 1;
		}
	}
	else
	{
		leapYear = 0;
	}
	return leapYear;
}