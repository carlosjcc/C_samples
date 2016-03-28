/**
 * switch.c
 *
 * Carlos Corrales
 * carloscorralesch@gmail.com
 *
 * Sample switch construct.
 */


#include <cs50.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{

	printf("Please give me an int: ");

	int n = GetInt();

	switch (n)
	{
		case 1:
		case 2:
		case 3:
			printf("You picked a small integer!\n");
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			printf("You picked a medium int!\n");
			break;
		case 8:
		case 9:
		case 10:
			printf("You picked a large int!\n");
			break;

		default:
			printf("You picked an invalid int!\n");
			break;
	}



	return 0;
}