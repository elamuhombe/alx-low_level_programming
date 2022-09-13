#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prrints lower case 
 * alphabets in reverse order followed by a new line
 *
 */
int main(void)
{
	char ch;

	for(ch = 'a'; ch <= 'z'; ch --)
	{
		printf(ch);
	}
	return (0);
}
