#include <stdio.h>

/**
* main - Print comb. OmO!
* 48 is 0, 57 is 9, 0x2C is comma
* and 0x20 is space
* Return: 0
*/

int main(void)
{
	int ch, bh, ah, od, oo1, oo2;

	for (ch = 48; ch <= 57; ch++)
	{
	for (bh = 48; bh <= 57; bh++)
	{
	for (ah = 48; ah <= 57; ah++)
	{
	for (od = 48; od <= 57; od++)
	{
		oo1 = (ch * 10) + bh;
		oo2 = (ah * 10) + od;
		if (oo1 < oo2)
		{
			putchar(ch);
			putchar(bh);
			putchar(0x20);
			putchar(ah);
			putchar(od);
			if (ch == 57 && bh == 56 && ah == 57 && od == 57)
			{
				break;
			}
			putchar(0x2C);
			putchar(0x20);
		}
	}
	}
	}
	}
	putchar(10);
	return (0);
}
