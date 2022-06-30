#include <stdio.h>
/**
 *main - This is my main function
 *Return: My function returns 0
 */
int main(void)
{
char c;
int i;
long int l;
long long int z;
float f;
printf("Size of a char: %d byte(s)\n", (int)sizeof(c));
printf("Size of an int: %d byte(s)\n", (int)sizeof(i));
printf("Size of a long int: %d byte(s)\n", (int)sizeof(l));
printf("Size of a long long int: %d byte(s)\n", (int)sizeof(z));
printf("Size of a float: %d byte(s)\n", (int)sizeof(f));
return (0);
}
