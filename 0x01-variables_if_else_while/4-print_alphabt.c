#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: program prints the all alphabet apart 
 * fro q and e in lower case 
 *
 * Return: Always 0 (Success)
 *
 */
int main (void)
{
	char ch;

	for (ch= 'a'; ch<= 'e'; ch++)
	{
		char *e = ch+5;
		
		putchar(e);
	}
	for (ch= 'f'; ch<= 'z'; ch++)
	{
		char *q=ch+12;
		putchar(q);
	
	}
	return (0);

