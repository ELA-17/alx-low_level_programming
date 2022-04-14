#include "main.h"

/**
 * _isdigit - check the entry whether it is digit or not
 * @c: variable
 *
 * Return: return always zero
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
