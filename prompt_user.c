/**
 * prompt_user.c
 *
 * Carlos Corrales
 * carloscorralesch@gmail.com
 *
 * Prompts user until user gives the requested input.
 */


#include <cs50.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{

	int n;

	do
	{
		printf("Please give me a positive int: ");
		n = GetInt();

	} 
	while (n < 1);

	printf("Thanks for the positive int!\n");



	return 0;
}