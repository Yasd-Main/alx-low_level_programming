#include "main.h"
int _putchar(char c);

/**
 * print_numbers - function prints the digits (0 through 9).
 * Return: None.
 */
void print_numbers(void)
{
int c;

for (c = 48; c < 58; c++)
{
_putchar(c);
}
_putchar('\n');
}

