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
	int digit = 48; /*48; decimal rep of 0*/

	while (digit <= 102) /*decimal rep of f*/
	{
		putchar(digit);

		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}
