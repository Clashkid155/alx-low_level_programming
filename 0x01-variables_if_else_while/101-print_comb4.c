#include <stdio.h>

/**
* main - Print comb. OmO!
* 48 is 0, 57 is 9, 0x2C is comma
* and 0x20 is space
* Return: 0
*/

int main(void)
{
	int ch, bh, ah;

	for (ch = 48; ch <= 57; ch++)
	{
		for (bh = 49; bh <= 57; bh++)
		{
			for (ah = 50; ah <= 57; ah++)
				{
				if (ch != bh && ch != ah && bh != ah && ch < bh && bh < ah)
					{
					putchar(ch);
					putchar(bh);
					putchar(ah);
					if (ch == 55 && bh == 56 && ah == 57)
					{
						break;
					}
					putchar(0x2C);
					putchar(0x20);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
