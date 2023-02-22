#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	char i;
	int num = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			num = 1;
	}

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			num = 1;
	}
	return (num);
}
