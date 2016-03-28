/**
 * f2c.c
 *
 * Carlos Corrales
 * carloscorralesch@gmail.com
 *
 * Converts Fahenheit to celsius.
 */


#include <cs50.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{

	printf("Temperature in F: ");
	float f = GetFloat();

	// note the .0 s, it's to keep the floating nature of #s
	float c = 5.0 / 9.0 * (f - 32.0);

	printf("%.1f\n", c);

	return 0;
}