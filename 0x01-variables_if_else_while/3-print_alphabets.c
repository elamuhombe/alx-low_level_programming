#include <stdio.h>

int main(void)
{	
	char ch;
	char CH;

	for (ch='a'; ch <= 'z'; ch++ && CH='A'; CH <= 'Z'; CH++)
	{
		putchar(ch, CH);
	}

	return (0);
}
	
