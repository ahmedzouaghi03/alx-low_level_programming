#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
		putchar (lett);
	putchar ('\n');
	return (0);
}
