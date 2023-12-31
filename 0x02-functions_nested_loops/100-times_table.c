#include "main.h"

/**
 * print_times_table - prints times tables
 *
 * @v: integer
 */

void print_times_table(int v)
{
	int a;
	int b;
	int c;

	if (v >= 0 && v <= 15)
	{
		for (a = 0; a <= v; a++)
		{
			for (b = 0; b <= v; b++)
			{
				c = (a * b);
				if (b == 0)
					_putchar('0' + c);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (c <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + c);
					}
					else if (c > 9 && c < 100)
					{
						_putchar(' ');
						_putchar('0' + (c / 10));
						_putchar('0' + (c % 10));
					}
					else if (c >= 100)
					{
						_putchar('0' + (c / 100));
						_putchar('0' + ((c / 10) % 10));
						_putchar('0' + (c % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
