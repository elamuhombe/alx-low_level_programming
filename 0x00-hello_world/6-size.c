#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prints the sizes of the various
 * types of data on the computer it is compiled on
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char charType;

	int intType;

	long int longInt;

	long long int longlongintType;

	float floatType;

	printf("Size of a char: %i bytes\n", sizeof(charType));
	printf("Size of an int %zu bytes\n", sizeof(intType));
	printf("Size of a long int %ld bytes\n", sizeof(longInt));
	printf("Size of a long long int %lld bytes\n", sizeof(longlongintType));
	printf("Size of a float %zu bytes \n", sizeof(floatType));
	return (0);
}
