#include <stdio.h>

/**
 * print_line - print a line with _
 * @n: number of times the character _ should be printed
 * Description: print a line with _
 * Return: nothing
 */

void print_line(int n)
{
 int i;

 if (n > 0)
 {
  for (i = 0; i < n; i++)
  {
   _putchar('_');
  }
  _putchar('\n');
 }
 else
 {
  _putchar('\n');
 }
}
