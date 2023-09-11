#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the value of n status:greater,less or equal.
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
