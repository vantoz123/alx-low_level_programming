/**
 * print_numbers - prints all natural numbers from n to 98, followed by a new line
 * @n: the starting number
 *
 * Return: void
 */
#include <stdio.h>
int main(){
void print_numbers(int n)
{
  while (n <= 98)
  {
    printf("%d", n);
    if (n != 98)
      printf(" ");
    n++;
  }
  printf("\n");
}
}
