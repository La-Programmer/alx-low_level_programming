#include "main.h"
#include <stdio.h>
/**
* get_endianness - Gets the endianness of a system
* Return: 1 if Little endian, 0 if Big endian
*/
int get_endianness(void)
{
	int x = 0x12324567;
	char *c = (char *) &x;

	if (*c == 0x67)
		return (1);
	else
		return (0);
}
