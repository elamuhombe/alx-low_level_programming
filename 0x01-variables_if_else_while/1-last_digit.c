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

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */
				if (n >5) {
						printf("%d Last digit of",n + "and is greater than 5 \n"); }
	
				else if ((n == 0)) {
						printf("%d Last digit of", n + "and is 0"); }
				else if ((n > 0)&& (n < 6)) {
					printf("%d Last digit of " , n + "and is less than 6 not 0");}

                                                               
					return (0);

}
