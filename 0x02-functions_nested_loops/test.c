#include <stdio.h>

int main(void)
{
	int n = -2147, a;

	a = n * -1;

	printf("The last digit of %i is: %i\n", a, (a % 10));
}
