#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print putchar using putchar prototype.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; Ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
