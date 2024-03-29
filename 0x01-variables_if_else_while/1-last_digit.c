#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Prints the last digit of a randomly generated number
*
* Description: The function prints the last digit of a randomly generated
* number and specifies whether the number greater than 5, equal to
* zero or less than 6 but not equal to zero
* Return: Returns 0
*/
int main(void)
{
	int n;
	int res;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	res = n % 10;
	if (res > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, res);
	else if (res == 0)
		printf("Last digit of %d is %d and is 0\n", n, res);
	else if ((res != 0) && (res < 6))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, res);
	return (0);
}
