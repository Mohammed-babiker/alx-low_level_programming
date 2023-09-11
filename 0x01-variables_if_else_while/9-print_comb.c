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
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}

		digit++;
	}
		putchar('\n');

		return ('0');
}
