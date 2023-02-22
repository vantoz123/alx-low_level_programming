#include "main.h"

/**
 * print_last_digit.c - computes the last_digit
 * @n: the int to extract the last digit from
 * Return: the last_digit value of int
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
