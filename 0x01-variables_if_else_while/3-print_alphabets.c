#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: prints all lowercase and uppercase letters
 *
 * Return: Always 0 (Success)
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
