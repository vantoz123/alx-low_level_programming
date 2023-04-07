#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <fcntl.h>

/**
 * create_file - append to file
 * @filename: is the path to file
 * @text_content: the content of the file
 * Return: chars read
 */

int create_file(const char *filename, char *text_content)
{
	int a;
	ssize_t x;
	int size;
	char *memory;

	if (!filename)
	{
		return (-1);
	}
	a = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (a == -1)
		return (-1);
	if (!text_content)
	{
		close(a);
		return (1);
	}
	size = _strlen(text_content);
	memory = malloc(sizeof(char) * size);
	if (!memory)
	{
		close(a);
		return (-1);
	}
	x = write(a, text_content, size);
	if (x == -1)
	{
		close(a);
		free(memory);
		return (-1);
	}
	close(a);
	free(memory);
	return (1);
}

/**
 * _strlen - len
 *
 * @s: is a pointer to a character
 *
 * Return: Always 0.
 */

int _strlen(const char *s)
{
	int y = 0;

	while (*(s + y) != '\0')
	{
		y++;
	}

	return (y);
}
