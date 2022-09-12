#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/* more headers goes there */

/**
 * main - Main Entry point
 *
 * Description: The program assign a random number to the 
 * varible n each time it is executed and prints the last digit of
 * the number stored in the variable n
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

		int n, l;
		

			srand(time(0));

				n = rand() - RAND_MAX / 2;
					/* your code goes there */
		 l = n % 10;         
				printf("Last digit of %d is",n);
				if (n >5) {
						printf("and %d\n is greater than 5 \n"); }
	
				else if ((n == 0)) {
						printf("and is 0"); }
				else if ((n > 0)&& (n < 6)) {
					printf("and is less than 6 not 0");}

                                                               
					return (0);

}
