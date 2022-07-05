#include <stdio.h>
/**
 * function: prototype for printing lower alphabet character using _putchar function
 */
void print_alphabet(void);
/**
 * main - calling and executing void print_alphabet(void); function
 * Return: Always 0.
 */
int main(void)
{
	char letter1;
	char letter2 = print_alphanet(letter1);
	_putchar(letter1);

}
/**
 *Function: void print_alphabet(void) definitio
 *Return:0
 */
void print_alphabet(void)
{
	for (char letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	return (0);
}


