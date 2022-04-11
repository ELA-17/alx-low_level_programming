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
int i;
for (num = 0; num < 10; num++)
for (j = 0; j < 10; j++)
for (i = 0; i < 10; i++)
if (i > j)
if (j > num)
if (num != j && num != i && i != j)
{
putchar(num + '0');
putchar(j + '0');
putchar(i + '0');
if (num != 7 || j != 8 || i != 9)
putchar(',');
if (num != 7 || j != 8 || i != 9)
putchar(' ');
}
putchar('\n');
return (0);
}
