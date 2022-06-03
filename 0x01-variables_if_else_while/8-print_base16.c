#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase 
 *
 * Return: return 0 
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
