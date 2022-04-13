#include "main.h"
/**
 * print_sign - sign check
 * @n: check for n
 *
 * Return: return zero or one or minus one
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
