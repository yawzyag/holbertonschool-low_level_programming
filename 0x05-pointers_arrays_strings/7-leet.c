#include "holberton.h"

/**
 * leet - encode string
 * @s: charachter to check
 *
 * Return: transformed text
 */
char *leet(char *s)
{
	int i, j;
	char letters[] = "oOlLeEaAtT";
	char num[] = "0011334477";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = num[j];
			}
		}
	}
	return (s);
}
