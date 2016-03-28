/**
 * nonswitch.c
 *
 * Carlos Corrales
 * carloscorralesch@gmail.com
 *
 * another nested if sample.
 */


#include <cs50.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("Please give me an int between 1 and 10: ");

	int n = GetInt();

	if (n >= 1 && n <= 3)
	{
		printf("You picked a small int!\n");
	}
	else if (n >= 4 && n <= 7)
	{
		printf("You picked a medium int!\n");
	}
	else if (n >= 7 && n <= 10)
	{
		printf("You picked a large int!\n");
	}
	else
	{
		printf("You picked an invalid int!\n");
	}


	return 0;
}