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
int ch;
for (num = 0; num < 10; num++)
{
putchar(num + '0');
}
for (ch = 'a'; ch <= 'f'; ch++)
{	
putchar(ch);
}
putchar('\n');
return (0);
}
