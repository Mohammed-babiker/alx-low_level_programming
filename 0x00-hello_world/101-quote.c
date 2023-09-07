#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print a qoute using  prints write function.
 * size_t write(int fd, const void, *bf, size-_t count);
 * Return: always 1 (Error).
*/

int main(void)
{	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, quo, 59);
	return (1);
}
