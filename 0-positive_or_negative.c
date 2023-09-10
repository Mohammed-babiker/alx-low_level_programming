#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: false or true validatio
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > n)
printf("The number %d is positive\n", n);
else if (n < 0)
printf("The number %d is negative\n", n);
else
printf("The number %d is zero\n", n);
return (0);
}
