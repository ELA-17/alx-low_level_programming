#include "main.h"
/**
 * main -c printig alphabet
 * @void: start from a
 * header: return from a to z
 * Return: return zero
 */
int main(void)
{
int i = 'a';
while (i <= 'z')
{
_putchar(i);
i = i + 1;
}
_putchar('\n');
return (0);
