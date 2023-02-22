#include "main.h"
/**4-isalpha.c - checks for alphabetic character
 * return 1 if c is a letter, lowercase or uppercase
 * return 0 otherwise
 * written by vantoz
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
