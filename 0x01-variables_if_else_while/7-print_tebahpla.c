#include <stdio.h>
/**
 * main - start from z
 * @void: got input from loop
 * header: return from z to a
 * Return: return zero
 */
int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
putchar(ch);
ch = ch - 1;
}
putchar('\n');
return (0);
}
