#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - it appends text to file
 * @filename:is path to file
 * @text_content:the file content
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	ssize_t x;
	int size;

	if (!filename)
		return (-1);

	a = open(filename, O_WRONLY | O_APPEND);

	if (a == -1)
		return (-1);

	if (!text_content)
	{
		close(a);
		return (1);
	}

	size = _strlen(text_content);
	x = write(a, text_content, size);

	if (x == -1)
	{
		close(a);
		return (-1);
	}
	close(a);
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
