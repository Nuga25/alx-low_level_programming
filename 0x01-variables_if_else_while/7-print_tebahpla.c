#include <stdio.h>

/**
 * main - prints alphabet in reverse
 * Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'z'; letter--)
		putchar(letter);

	putchar('\n');
	return (0);
}
