#include "holberton.h"

/**
 * read_textfile - Read the file text
 * @filename: name of the file
 * @letters: num of characters
 *
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, num_letters;
	char *buf = malloc(sizeof(char) * letters);

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	num_letters = read(fd, buf, sizeof(char) * letters);
	if (num_letters == -1)
	{
		free(buf);
		return (0);
	}
	num_letters = write(STDOUT_FILENO, buf, num_letters);
	if (num_letters == -1)
	{
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (num_letters);
}
