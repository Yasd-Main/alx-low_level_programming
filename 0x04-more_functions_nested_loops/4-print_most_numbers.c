#include "main.h"
int _putchar(char c);

/**
 * print_most_numbers - function prints digits (0-9) except 2 and 4.
 * Return: None.
 */
void print_most_numbers(void)
{
int c;

for (c = 48; c < 58; c++)
{
if (c != 50 && c != 52)
{
_putchar(c);
}
}
_putchar('\n');
}

