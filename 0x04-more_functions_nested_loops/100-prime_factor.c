#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	long int num = 612852475143;
	long int i;

	for (i = 2; i < num; i++)
	{
		if ((num % i) == 0)
		{
			num = num / i;
		}
	}
	printf("%ld\n", i);
	return (0);
}
