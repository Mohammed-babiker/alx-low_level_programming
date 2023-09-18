#include "main.h"
#include <unistd.h>

/**
 * _putchar - pwrites the character c to stdout
 *
 * on error, -1 return.
 * Return: on success 1
 */
 int _putcha(char c)
 {
         return (write(1, &c, 1));
 }
