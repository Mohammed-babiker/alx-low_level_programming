#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print a qoute using  prints write function.
 *
 * Return: always 1 (Error)
*/

int main(void)
{	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(1, quo, 59);
	return (1);
}
