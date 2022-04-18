#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * struct identifier - User define data type for each function
 * define the structure fore each identifier and the corresponding function
 * @id: first member of the structure of type char
 * @name: second member of the structure of type char
 *
 */
typedef struct identifier
{
	char *id;
	char *name;
} op_struct;

int _putchar(char c);
char *get_ops(char id);
void *print_numbers(int a);
void *print_character(char c);
void *print_string(char *str);
void _printf(const char *string, ...);
int string_length(char *string);
int _strcmp(char *s1, char *s2);

#endif /* MAIN_H */
