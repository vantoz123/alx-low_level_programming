#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - it reads and prints from a file
 * @filename: is the path to file
 * @letters: the characters to read
 * Return: characters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	char *buffer;
	ssize_t bytes, z;

	if (!filename)
		return (0);
	a = open(filename, O_RDONLY);
	if (a == -1)
	{
		close(a);
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(a);
		return (0);
	}

	bytes = read(a, buffer, letters);

	if (bytes == -1)
	{
		close(a);
		free(buffer);
		return (0);
	}

	z = write(STDOUT_FILENO, buffer, bytes);

	if (z == -1)
	{
		close(a);
		free(buffer);
		return (0);
	}
	close(a);
	return (bytes);
}
