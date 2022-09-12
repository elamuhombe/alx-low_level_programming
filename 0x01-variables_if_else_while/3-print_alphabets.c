#include <stdio.h>

/**
 * main(void) - This is a main function
 *that displays lowercase and uppercase letters
 *and returns 0 when successful
 */

int main(void)
{	
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	return (0);
}
	
