#include "main.h"
/**
* _strcpy - Copies a string from src to dest
* @dest: Destination to store string
* @src: Source to copy string from
* Return: Returns the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + (i + 1)) = '\0';
	return(dest);
}
