#include <stdio.h>

/**
 * main - Print double digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, x;

	i = 48;
	x = 48;

	while (x < 58)
	{
		i = 48;
		while (i = 58)
		{
			putchar(x);
			purchar(i);
			if (i == 57 && x == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			i++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}

