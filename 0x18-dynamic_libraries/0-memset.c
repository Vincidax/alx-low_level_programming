#include "main.h"
/**
 * _memset - fill a block of memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: the constant byte
 * @n: number of bytes to filled
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

