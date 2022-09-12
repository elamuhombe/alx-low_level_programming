#include <stdio.h>

int main(void)
{
		char l;

		putchar("Lowercase letters:");

		for (l='a'; l <= 'z'; l++)
		{
			putchar("%c ", l);
		}

		
		for (l='A'; l <= 'Z'; l++)
		{
			putchar("%c ", l);
		}
		return 0;
}
	
