#include <stdio.h>
/**
 * main - starting from a
 * @void: take input fro loop
 * header: return from a to z
 * Return: return zero
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch = ch + 1;
}
putchar("\n");
return (0);
}

