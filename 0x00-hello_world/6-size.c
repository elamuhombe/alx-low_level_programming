/*
 * main - Entry point
 *
 */
#include<stdio.h>

char charType;

int intType;

long int longInt;

long long int longlongintType;

float floatType;

int main(void)
{
	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("Size of an int %zu bytes\n", sizeof(intType));
	printf("Size of a long int %zu bytes\n", sizeof(longInt));
	printf("Size of a long long int %zu bytes\n", sizeof(longlongintType));
	printf("Size of a float %zu bytes \n", sizeof(floatType));
	return (0);
}
