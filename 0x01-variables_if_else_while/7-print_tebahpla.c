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

	for(ch = 'z'; ch <= 'a'; ch --)
	{
		printf("%c", ch);
	}
	return (0);
}
