#include <stdio.h>
/**
 * main - starting with zero
 * @void: take input from the function
 * header: return from zero to ten
 * Return: return zero
 */

int main(void)
{
int num = 0;
while (num < 10)
{
putchar(num + '0');
putchar(',');
putchar(' ');
num = num + 1;
}
return (0);
}
