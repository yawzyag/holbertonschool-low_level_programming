#include "holberton.h"

/**
 * _strlen - show the length of string
 *@s: string
 *
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i);)
		i++;
	return (i);
}

/**
 * create_file - Read the file text
 * @filename: name of the file
 * @text_content: num of characters
 *
 * Return: number of letters
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fd_num;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

	fd_num = write(fd, text_content, _strlen(text_content));

	if (fd_num == -1)
		return (-1);

	close(fd);

	return (1);
}
