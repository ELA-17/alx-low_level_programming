#include <stdio.h>
/**
 * main -c list natural number multiple
 *
 * Return: return zero
 */
int main(void)
{
int i, sum = 0;

for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum = sum + i;
}
printf("%d\n", sum);

return (0);
}
