#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - this function converts a string to an integer.
 * @s: this argument is the string to be converted.
 *
 * Return: this function returns an integer.
 */
int _atoi(char *s)
{
	int len = strlen(s) - 1;
	
	int i;

	char *a;

	int ind_a = 0;

	for (i = 0; i <= len; i++)
	{
		int cmp;
		for (cmp = 0; cmp <= 9; cmp++)
		{
			if (s[i] != cmp || s[i] != '-' || s[i] != '+')
			{
				int j;

				for (j = i; ) 
			}
		}
	}
}

int main()
{
	char *d = "hel-l++o---+12";
	
	return (_atoi(d));
}
