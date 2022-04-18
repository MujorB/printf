#include "test_file.h"

int _printf(const char *format)
{

	unsigned int i, str_len;

	for (i = 0; format[i] != '\0'; i++)
	{
		str_len++;
	}

	for (i = 0; i < str_len; i++)
	{
		_putchar(format[i]);
	}
	//format[i] = '\0';
	_putchar('\n');

	return(0);
}
