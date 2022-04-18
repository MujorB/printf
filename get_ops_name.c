#include "main.h"

/**
 * get_ops - holds logic for pointing identifiers to functions
 * Description - takes an identifier character and checks if we have a function to perform the operation
 * @id: identifier string
 *
 * Return: pointer to function that carries out the operation
 */
char *get_ops(char id)
{
	op_struct ops[] = {
	{"d", "number"},
	{"c", "character"},
	{"s", "string"},
	// {"i", op_numi},
	{NULL, NULL}
	};

	int i = 0;

	while (ops[i].id != NULL && *(ops[i].id) != id)
		i++;

	return (ops[i].name);

}


