/**
* main - Prints string to standard error
*
* Description: Prints to standard error without using 'puts' or 'printf'
* Return: Returns 1
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char *strin = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t length = strlen(strin);

	fwrite(strin, sizeof(char), length, stderr);
	return (1);
}
