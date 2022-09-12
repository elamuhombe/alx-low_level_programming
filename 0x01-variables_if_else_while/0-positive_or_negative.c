#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: assign a  random value to the variable n on execution
 * and prints whether the numberstired in the variable n is
 * positive or negative
 *
 * Return: always 0 (Success)
 */

int main(void)

{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

/* your code goes there */
	if (n > 0) 
		{
		printf("%d is positive\n", n);		}
	else
	       	if ((n == 0)) 
		{
		printf("%d is zero\n", n);
		}
	else	
		{
		printf("%-d is negative\n", n);
		}			

	return (0);

}
