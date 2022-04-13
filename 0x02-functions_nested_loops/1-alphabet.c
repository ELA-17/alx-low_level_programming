#include "main.h"
/**
 * main -c printig alphabet
 * @void: start from a
 * header: return from a to z
 * Return: return zero
 */
void print_alphabet(void)
{
char i = 'a';
while (i <= 'z')

_putchar(i);
i = i + 1;

_putchar('\n');
}
