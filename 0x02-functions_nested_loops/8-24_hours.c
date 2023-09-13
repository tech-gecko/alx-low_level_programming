#include "main.h"

/**
 * jack_bauer - Prints all minutes of the day
 * @h: Hour index
 * @m: Minute index
 *
 * Return: NULL
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while (h < 24)
	{
		if (h < 10)
			_putchar('0');
		_putchar(h + '0');
		_putchar(':');
		while (m < 60)
		{
			if (m < 10)
				_putchar('0');
			_putchar(m + '0');
			m++;
		}
		h++;
	}
}
