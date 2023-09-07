/**
* main - Prints the size of different data types on the system
* Return: Returns 0
*/
#include <stdio.h>

int main(void)
{
	char c;
	int i;
	long l;
	long long lli;
	float f;

	printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
