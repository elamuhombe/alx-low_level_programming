#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prrints lower case 
 * alphabets in reverse order
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		printf("%c", ch);
	}
	return (0);
}
