#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * read_textfile - Opens and reads a text file and displays
 * the output in stdout
 * @filename: The filename
 * @letters: The number of letters it should read and print
 * Return: The numbers of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char ch[1024];
	unsigned int written = 0;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	while (fgets(ch, letters - 1, fp) != NULL && written < letters)
	{
		if (written < letters)
			written += printf("%.*s", (int)(letters - written), ch);
		if (written == 0)
			return (0);
	}
	fclose(fp);
	return (written);
}
