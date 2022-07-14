#include "main.h"

/**
 * reverse_array - the function reverses the elements in
 * an array.
 * @a: this argument is the array.
 * @n: this argument is the number of elements in the
 * array.
 *
 * Return: this function returns nothing.
 */
void reverse_array(int *a, int n)
{
	int temp;

	int i;

	int ind = n - 1;

	int ave;

	if (ind % 2 == 0)
	{
		ave = ind / 2;
		ave += 1;
	}
	else
	{
		ave = (ind + 1) / 2;
	}

	for (i = 0; i <= ave; i++)
	{

		temp = a[i];
		a[i] = a[ind];
		a[ind] = temp;
		ind--;
	}
}
