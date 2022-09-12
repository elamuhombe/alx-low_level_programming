#include <stdio.h>

/**
 * main(void) - This is a main function
 *@brief Displays lowercase and uppercase letters
 *@char ch: displays each letter both lower case and uppercase
 *@return 0: successful
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

	return 0;
}
	
