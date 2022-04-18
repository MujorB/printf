#ifndef MAIN_H
#define MAIN_H
/**
 * struct identifier - Define the structure fore each identifier and the corresponding function
 * @identifier
 * 
 */

typedef struct identifier
{
    char *id;
    char *name;
} op_struct;

#include <stdarg.h>

int _putchar(char c);
char *get_ops(char id);
void *print_numbers(int a);
void *print_character(char c);
void *print_string(char *str);
void _printf(const char *string, ...);
int string_length(char *string);
int _strcmp(char *s1, char *s2);

#endif /* MAIN_H */