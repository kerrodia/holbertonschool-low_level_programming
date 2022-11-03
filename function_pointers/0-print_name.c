#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name from a function pointer.
 * @name: pointer to name being printed.
 * @f: a pointer to a function printing.
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
