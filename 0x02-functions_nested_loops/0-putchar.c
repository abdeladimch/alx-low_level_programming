#include "main.h"

/**
 * main - the entry of the program
 * Return: 0 (success!)
**/

int main(void)
{
	unsigned int i;
	char c[] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		_putchar(c[i]);
	}

	_putchar('\n');

	return (0);
}
