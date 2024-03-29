#include "main.h"

/**
*flip_bits - returns the number of bits you would need to flip to get from one number to another (n to m).
*@n: initial number
*@m: final number
*
*Return: the number of flipped bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	int a = 0;

	while (flip)
	{
		if (flip & 1)
			a++;
		flip >>= 1;
	}
	return (a);
}
