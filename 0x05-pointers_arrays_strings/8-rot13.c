#include "holberton.h"

/**
 * rot13 - encode string in root13
 * @s: charachter to check
 *
 * Return: transformed textmoving 13 spaces
 */
char *rot13(char *s)
{
	int i, j;
	char normal[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot_13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; normal[j] != '\0'; j++)
		{
			if (s[i] == normal[j])
			{
				s[i] = rot_13[j];
				break;
			}
		}
	}
	return (s);
}
