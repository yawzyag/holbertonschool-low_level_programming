#include "holberton.h"

/**
 * rot13 - encode string in root13
 * @s: charachter to check
 *
 * Return: transformed textmoving 13 spaces
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'm')
		    || (s[i] >= 'A' && s[i] <= 'M'))
		{
			s[i] = s[i] + 13;
		}
		else
		{
			for (; (s[i] >= 'n' && s[i] <= 'z') ||
				     (s[i] >= 'N' && s[i] <= 'Z');)
			{
				s[i] = s[i] - 13;
			}
		}
	}
	return (s);
}
