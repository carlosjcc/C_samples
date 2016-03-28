/**
 * if_sample.c
 *
 * Carlos Corrales
 * carloscorralesch@gmail.com
 *
 * Nested if's sample.
 */


#include <cs50.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	printf("Please give me an int: ");

	int n = GetInt();

	if (n > 0)
	{
		printf("You picked a positive integer!\n");
	}
	else if (n == 0)
	{
		printf("You picked cero!\n");
	}
	else
	{
		printf("You picked a negative integer!\n");
	}

	return 0;
}