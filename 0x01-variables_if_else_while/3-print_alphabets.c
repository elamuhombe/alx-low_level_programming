#include <stdio.h>

int main(void)
{	
	char ch;
	char CH;

	for (ch='a', CH='A'; ch <= 'z' && CH <= 'Z'; ch++, CH++)

	{
		putchar(ch++);
		putchar(CH++);
	}

	return (0);
}
	
