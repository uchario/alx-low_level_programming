#include "main.h"

int main(void)
{
	int r;
	
	r = _isalpha('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	r = _islower(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
