#include <stdio.h>

int main(void)
{
		char l;

		printf("Lowercase letters: \n");

		for (l='a'; l <= 'z'; l++)
		{
			printf("%c ", l);
		}

		printf("\nUppercase letters : \n");
		for (l='A'; l <= 'Z'; l++)
		{
			printf("%c ", l);
		}
		return 0;
}
	
