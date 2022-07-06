#include <stdio.h>

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int product = i * j;
			_putchar(product/10 + '0');
			_putchar(product%10 + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
