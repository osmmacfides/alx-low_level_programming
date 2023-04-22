#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');

		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
