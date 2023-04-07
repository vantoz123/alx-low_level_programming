#include "main.h"

/**
*get_bit - get the value of a bit at the given index
*@n: is the number
*@index: index starting from 0 of the bit required
*
*Return: The converted value
*/

int get_bit(unsigned long int n, unsigned int index)
{
    if (index > 63)
		return (-1);
    
    /* Shift n right by index bits, then use bitwise AND to get the value at the given index */
    return (n >> index) & 1;
}
