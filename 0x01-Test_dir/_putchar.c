#include "test_file.h"
/**
 * _putchar - function to print a charactar to stdout
 * @c: holds the character
 *
 * Return: 1 on success and -1 on failure
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
