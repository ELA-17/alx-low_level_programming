#include "main.h"

/**
 * print_alphabet_x10 - print from a to z ten times
 */
void print_alphabet_x10(void)
{
char i;
int j = 0;
while (j < 10)
{
i = 'a';
while (i <= 'z')
{
-putchar(i);
i = i + 1;
}
-putchar(\n);
j = j + 1;
}
}
