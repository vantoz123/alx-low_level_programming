#include "main.h"

/**
 * get_endianness -this code checks whether a machine is big endian or little
 *
 * Return: 1 if little endian, 0 otherwise
 */

int get_endianness(void)
{
	unsigned int pilot = 1;
	char *endiann = (char *) &pilot;

	if (*endiann)
		return (1);
	return (0);

}
