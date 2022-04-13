#include "main.h"

/**
 * main - looking for num
 * @print_last_digit: print last digit of a number
 *
 * Return zero
 */

int print_last_digit(int n)
{
int last_digit = n % 10;
_putchar(last_digit + '0');
return (0);
}
