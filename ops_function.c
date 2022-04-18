#include "main.h"

/**
 * print_numbers - print number to output
 *
 * Return: void
 */

void *print_numbers(int a)
{
	/* Make sure number isn't null */
	if (!a)
	return (NULL);

	/* Handle if number is negative */
	if (a < 0)
	{
		_putchar('-');
		a *= -1;
	}

	int num, tempHolder = 1, x;

	/* Make sure number is an integer */
	if (a % 1 != 0)
	return (NULL);

	/* logic to get and print out individual numbers using putchar */
	x = a;
	while (x > 9)
	{
		x /= 10;
		tempHolder *= 10;
	}

	x = tempHolder;


	while (a > 9)
	{
		tempHolder = a / x;
		_putchar(tempHolder + '0');
		a %= x;
		x /= 10;
	}

	_putchar(a + '0');
}

/**
 * print_character - print a single character to output
 * @c: character received
 *
 * Return: void
 */
void *print_character(char c)
{

	if (!c)
	return (NULL);

	_putchar(c);
}

/**
 * print_string - print string to output
 * @str: string received.
 *
 */
void *print_string(char *str)
{
	int i;

	if (!str)
	return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		print_character(str[i]);
	}
}
