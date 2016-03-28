/**
 * sizeof.c
 *
 * Carlos Corrales
 * carloscorraesch@gmail.com
 *
 * Prints the size of primitive data types
 */


#include <stdio.h>

int main(int argc, char const *argv[])
{

	char c;
	double d;
	float f;
	int i;

	printf("char: %ld\n", sizeof(c));
	printf("double: %ld\n", sizeof(d));
	printf("float: %ld\n", sizeof(f));
	printf("int: %ld\n", sizeof(i));

	return 0;
}