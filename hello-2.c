/**
 * hello-2.c
 *
 * Carlos Corrales
 * carloscorralesch@gmail.com
 *
 * Says hello to an entered name.
 */


#include <stdio.h>
#include <cs50.h>

int main(void)
{
	/* code */

	printf("State your name\n");

	string name = GetString();

	printf("Hello, %s\n", name);

	return 0;
}