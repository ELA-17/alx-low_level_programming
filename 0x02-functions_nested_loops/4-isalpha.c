#include "main.h"

/**
 * _isalpha - character check
 * @c: check for c
 *
 * Return: return zero or one
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') ||
(c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
