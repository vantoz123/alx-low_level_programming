/**
 * print_alphabet_10x - Prints the alphabet in lowercase 10 times, 
 * each followed by a new line.
 */
void print_alphabet_10x(void)
{
    int i, j;
    char c;

    for (i = 0; i < 10; i++)
    {
        for (c = 'a'; c <= 'z'; c++)
        {
            _putchar(c);
        }
        _putchar('\n');
    }
}

