#include "main.h"
/**
* _abs - Computes the absolute value of an integer
* @n: The number to be evaluated
*
* Return: Returns the absolute value of the input
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
