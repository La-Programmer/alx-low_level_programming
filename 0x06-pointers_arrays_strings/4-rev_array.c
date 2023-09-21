#include "main.h"
/**
* reverse_array - Reverses an array
* @a: Array of integers
* @n: Number of elements in the array
* Return: nothing
*/
void reverse_array(int *a, int n)
{
	int i = 0, tmp, j = n - 1;

	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[j - i];
		a[j - i] = tmp;
		i++; 
	}
}
