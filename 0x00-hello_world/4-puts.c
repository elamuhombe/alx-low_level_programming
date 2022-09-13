#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints exactly: 
 *'Programming is like building a multilingual puzzle'
 * and displays it in a new line
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
 puts("\"Programming is like building a multilingual puzzle ");
 return (0);	
}
:%s/\s\+$//e	
