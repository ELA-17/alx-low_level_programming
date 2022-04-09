#include <stdio.h>
/**
 * main - starting from a and A
 * @void: got the Input from the loop
 * header: return from a to z on both case
 * Return: return zero
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if	(ch != 'e')
if      (ch != 'q')
putchar(ch);
ch = ch + 1;
}
putchar('\n');
return (0);
}
