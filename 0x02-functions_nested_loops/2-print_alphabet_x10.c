#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to print.
 *
 * Return: On success, putchar(c); a character or a negative value if an error occurred.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
