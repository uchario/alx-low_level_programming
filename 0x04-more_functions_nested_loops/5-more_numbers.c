int _putchar(char);

void more_numbers (void)
{
	int i = 0;
	int j;

	while (i <= 10)
	{
		for (j = 0; j <= 14; j++)
		{
			char k = j / 10 + '0';
			char l = j % 10 + '0';
			if (k == '0')
				_putchar(l);
			else
			{
				_putchar(k);
				_putchar(l);
			}
		}
		_putchar('\n');
		i++;
	}
}
