#include <stdio.h>
/**
* main - Prints the letters of the alphabet in lowercase except q and e
*
* Return: Returns 0
*/

int main(void)
{
	char c = 'a';
	char res;
	int i = 0;

	while (i < 26)
	{
		res = c + i;
		if ((res == 'q') || (res == 'e'))
		{
			i++;
			res = c + i;
		}
		putchar(res);
		i++;
	}
	putchar('\n');
	return (0);
}
