#include "main.h"

/**
 * _printf - prints out a formatted string.
 *
 */

void _printf(const char *string, ...)
{

	int i;

	va_list params;

	va_start(params, string);

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] == '%' && string[i + 1] != '%')
		{
			i++;
			// char id_holder = string[i];
			char *ops_val = get_ops(string[i]);

			// printf("%s", ops_val);

			if (ops_val != NULL)
			{
				// _putchar('A');
				/* Call function to check and run operation here */
				if (_strcmp(ops_val, "number") == 0)
				{
					// _putchar('N');
					int num = va_arg(params, int);

					print_numbers(num);
				}
				else if (_strcmp(ops_val, "character") == 0)
				{
					char c = va_arg(params, int);

					print_character(c);
					// i++;
				}
				else if (_strcmp(ops_val, "string") == 0)
				{
					print_string(va_arg(params, char *));
				}
			}
			else
			{
				_putchar('E');
			}
		}
		else if (string[i] == '\\' && string[i + 1] == 'n')
		{
			_putchar('\n');
			i++;
		}
		else
		{
			_putchar(string[i]);
		}
	}

	va_end(params);

}
