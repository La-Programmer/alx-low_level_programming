#include "function_pointers.h"
/**
* print_name - Prints a name
* @name: Name to print
* @f: Function to perform on name
* Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
}
