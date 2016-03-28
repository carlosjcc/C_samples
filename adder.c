/**
 * adder.c
 *
 * Carlos Corrales
 * carloscorralesch@gmail.com
 *
 * Prompts user for 2 integers and prints result.
 */


#include <cs50.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */

	printf("Please give me an int: ");

	int x = GetInt();

	printf("Please give me another int: ");

	int y = GetInt();

	printf("the sum of %d and %d is: %d. \n", x , y, x + y);

	return 0;
}