#include <stdio.h>
/**
 * main - Prints alphebets except q and e
 * Return: Always
 */
int main(void)
{
	char letter;
		for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar(letter);
	return (0);
}
