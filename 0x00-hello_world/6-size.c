#include <stdio.h>
/**
 * main - checking the type for the size of data
 * @void: no input
 * section header: return zero
 * Return: return the size for each data type
 */
int main(void)
{
	int i;
	long int il;
	long long int ill;
	char c;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(il));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ill));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
