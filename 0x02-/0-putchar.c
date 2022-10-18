#include "main.h"

/**
 * main - print the word "_putchar"
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char string[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');

	return (0);
}
