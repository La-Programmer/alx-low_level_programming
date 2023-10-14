#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
* op_add - Adds two integers
* @a: First integer
* @b: Second integer
* Return: Result of integer addition
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - Subtracts two integers
* @a: First integer
* @b: Second integer
* Return: Result of integer subtraction
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - Multiplies two integers
* @a: First integer
* @b: Second integer
* Return: Result of integer multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - Divides two integers
* @a: First integer
* @b: Second integer
* Return: Result of integer division
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - Finds the modulo of two integers
* @a: First integer
* @b: Second integer
* Return: Result of modular division
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
