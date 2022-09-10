#include <stdio.h>

/**
* main - Print comb. OmO!
* 48 is 0, 57 is 9, 0x2C is comma
* and 0x20 is space
* Return: 0
*/

int main(void)
{
	int ch, ah;

	for (ch = 48; ch <= 57; ch++)
	{
		for (ah = 49; ah <= 57; ah++)
		{
			if (ch != ah && ch < ah)
			{
				putchar(ch);
				putchar(ah);
				if (ch == 56 && ah == 57)
				{
					break;
				}
				putchar(0x2C);
				putchar(0x20);
			}
		}
	}
	putchar(10);
	return (0);
}
