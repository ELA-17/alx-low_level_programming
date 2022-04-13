#include "main.h"

/**
 * main - initialize from a
 * @void: forming loop
 * description: using customized header
 * header: return from a to z in lower case
 * Return: return zero
 */
void print_alphabet(void)
{
char i = 'a';
while (i <= 'z')
{
_putchar(i);
i = i + 1;
}
_putchar('\n');
}
