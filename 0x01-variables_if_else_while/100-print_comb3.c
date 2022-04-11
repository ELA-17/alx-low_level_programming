#include <stdio.h>
/**
 * main - starting with zero
 * @void: take input from the function
 * header: return from zero to fifteen
 * Return: return zero
 */

int main(void)
{
int num;
int j;
for (num = 0; num < 10; num++)
for (j = 0; j < 10; j++)
if (j > num)
{
putchar(num + '0');
putchar(j + '0');
if (num != 8 || j != 9)
putchar(',');
if (num != 8 || j != 9)
putchar(' ');
}
putchar('\n');
return (0);
}
