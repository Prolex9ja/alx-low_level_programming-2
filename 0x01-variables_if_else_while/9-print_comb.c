#include <stdio.h>

/**
 *  main - print possible combination 0-9.
 *
 *   Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	Return(0);
}
