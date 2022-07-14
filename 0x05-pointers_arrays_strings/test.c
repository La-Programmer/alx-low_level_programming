#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char str[12];

	int val;

	strcpy(str, "H+-14mvv365");

	val = atoi(str);

	printf("%s, %d", str, val);
}
