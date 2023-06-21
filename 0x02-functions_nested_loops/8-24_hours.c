#include "main.h"
/**
 * jack_bauer- prints every minute of the day of Jack Bauer
*/
void jack_bauer(void)
{
	int hour = 0;
	int min;

	while (hour <= 23)
	{
		min = 0;
		while (min <= 59)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
		}
		min++;
	}
	hour++;
	_putchar('\n');
}
