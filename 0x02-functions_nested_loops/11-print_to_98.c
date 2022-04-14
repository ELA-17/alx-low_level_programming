#include <stdio.h>

/**
 * print_to_98 - starting from n
 *
 * @n: counting beginner
 */

void print_to_98(int n)
{
int fnum;
if (n <= 98)
{
for (fnum = n; fnum <= 98; fnum++)
printf("%d, ", fnum);
}
printf("\n");
{
else
{
for (fnum = n; fnum >= 98; fnum--)
printf("%d, ", fnum);
}
printf("\n");
}
}
