#include "main.h"

/**
 * jack_bauer - print every minute of the day
 */

void jack_bauer(void)
{
	int dh = 48, uh = 48, dm = 48, um = 48;

	while (dh < 51)
	{
		while (uh < 58)
		{
			if (dh == 50 && uh == 52)
				break;

			while (dm < 54)
			{
				while (um < 58)
				{
					_putchar(dh);
					_putchar(uh);
					_putchar(':');
					_putchar(dm);
					_putchar(um);
					_putchar(10);
					um++;
				}
				um = 48;
				dm++;
			}
			um = 48;
			dm = 48;
			uh++;
		}
		um = 48;
		dm = 48;
		uh = 48;
		dh++;
	}
}
