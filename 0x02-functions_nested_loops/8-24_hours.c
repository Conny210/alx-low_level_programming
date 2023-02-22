#include "main.h"
/**
 * jack_bauer - print number of minutes
 *
 * Return : void
 */
void jack_bauer(void)
{
	int t1, t2, s1, s2;

	for (t1 = 0 ; t1 <= 2 ; t1++)
	{
		for (t2 = 0 ; t2 < 10 ; t2++)
		{
			for (s1 = 0 ; s1 < 6 ; s1++)
			{
				for (s2 = 0 ; s2 < 10 ; s2++)
				{
					_putchar('0' + t1);
					_putchar('0' + t2);
					_putchar(':');
					_putchar('0' + s1);
					_putchar('0' + s2);
					_putchar('\n');
					if (t1 == 2 && t2 == 3 && s1 == 5 && s2 == 9)
					{
						return;
					}
				}
			}
		}
	}
}

