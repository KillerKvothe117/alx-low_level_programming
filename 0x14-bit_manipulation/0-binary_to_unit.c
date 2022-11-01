#include "main.h"

/**
 * binary_to_unit - converts a binary to int
 * @s: pointer to binary chars
 * Return: int value to zero
 */
unsigned int binary_to_unit(const char *s)
{
	unsigned int res = 0, i = 0;

	if (!s)
		return (0);
	for (; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '1')
			return (0);
		res = res << 1;
		res |= (s[i] - '0');
	}

	return (res);
}
