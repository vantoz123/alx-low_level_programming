#include "main.h"

/**
*set_bit - sets a bit at a position to 1
*@n: is number to be used
*@index: is the index to be set
*
*Return: 1 on success, or -1 on failure
*/

int set_bit(unsigned long int *n, unsigned int index) {
  if (index >= sizeof(unsigned long int) * 8) {
    return -1; // index out of bounds
  }
  *n |= (NULL << index);
  return 1;
}
