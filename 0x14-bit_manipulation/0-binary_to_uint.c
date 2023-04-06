#include "main.h"

/**
 * binary_to_uint - converts a binary to integer
 * @s: pointer to binary characters
 * Return: integer value or zero
 */
unsigned int binary_to_uint(const char *s)
{
	unsigned int res = 0, a = 0;

	if (!s)
		return (0);
	for (; s[a]; a++)
	{
		if (s[a] < '0' || s[a] > '1')
			return (0);
		res = res << 1;
		res |= (s[a] - '0');
	}

	return (res);
}
