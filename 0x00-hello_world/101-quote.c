#include <unistd.h>

/**
 * main - Prints "and that pieceof art is useful..." - Dora Korpar, 2015-10-19
 * Description: UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
 * Return: 1 Always.
 */

int main(void)
{
	write(2,
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		59);

	return (1);
}
