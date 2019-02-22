#include "holberton.h"

/**
 * rot13 - encode string in root13
 * @s: charachter to check
 *
 * Return: transformed textmoving 13 spaces
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'm')
		    || (s[i] >= 'A' && s[i] <= 'M'))
		{
			s[i] = s[i] + 13;
		}
		else
		{
			while ((s[i] >= 'n' && s[i] <= 'z') ||
			      (s[i] >= 'N' && s[i] <= 'Z'))
			{
				s[i] = s[i] - 13;
			}
		}
		i++;
	}
	return (s);
}
