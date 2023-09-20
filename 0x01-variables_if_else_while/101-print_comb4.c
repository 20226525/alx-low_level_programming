#include <stdio.h>

/**
 * main - prints all possible different combinatins of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l;

	for (n = 48; m < 58; m++)
	{
		for (m = 49; m < 58; m++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > m && m > n)
				{

					putchar(n);
					putchar(n);
					putchar(n);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar(*"\n");
	return (0);
}
