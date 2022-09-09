#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */
				if n >5
					printf("Last digit of", n, "and is greater than 5 \n");
				else if ((n == 0))
					printf("Last digit of", n, "and is 0");
				else if ((n > 0)&& (n < 6))
					printf("Last digit of " , n "and is less than 6 not 0");

                                                               
					return (0);

}
