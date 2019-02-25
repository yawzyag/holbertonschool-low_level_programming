#include "holberton.h"

/**
 * _memcmp - compares the first n bytes of
 * memory area str1 and memory area str2
 * @s1: his is the pointer to a block of memory.
 * @s2: his is the pointer to a block of memory.
 * @n: number to compare
 *
 * Return: char
 */

int _memcmp(const void *s1, const void *s2, char n)
{
	const unsigned char *p1 = s1, *p2 = s2;

	while (n--)
		if (*p1 != *p2)
		{
			return (*p1 - *p2);
		}
		else
			p1++, p2++;
	return (0);
}


/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack
 * @haystack: string to pass
 * @needle: compare string
 *
 * Return:pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int length, i;

	for (i = 0, length = 0; *(needle + i) != '\0'; i++)
		length++;

	while (*haystack)
	{
		if (!_memcmp(haystack++, needle, length))
			return (haystack - 1);
	}
	return (0);
}
