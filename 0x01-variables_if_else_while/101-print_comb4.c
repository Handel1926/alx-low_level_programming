#include <stdio.h>

/**
 * main - print different combination of 3
 * Return: Always 0 (success)
 */
int main(void)
{
	int x, y, z;

	x = 48;
	y = 48;
	z = 48;

	while (y < 58)
	{
		x = 48;
		while (x < 58)
		{
			z = 48;
			while (z < 58)
			{
				if (y != x && y != z && x != z && y < x && x < z)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x == 56 && y == 55 && z == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				z++;
			}
			x++;
		}
		y++;
	}
	putchar('\n');
	return (0);
}
