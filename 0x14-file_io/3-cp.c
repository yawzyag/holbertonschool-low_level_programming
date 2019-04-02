#include "holberton.h"

/**
 * main - copy a file
 * @ac: arguments count
 * @av: arguments value
 *
 * Return: lenght of string
 */
int main(int ac, char **av)
{
	int fd_1, fd_2, num_let = 1024, c_1, c_2;
	char buf[1024];

	if (ac != 3)
	{ dprintf(2, "Usage: cp %s %s\n", av[1], av[2]);
		exit(97); }
	if (!av[1])
	{ dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98); }
	fd_1 = open(av[1], O_RDONLY);
	fd_2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_2 == -1)
	{ dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99); }
	while (num_let == 1024)
	{
		num_let = read(fd_1, buf, sizeof(buf));

		num_let = write(fd_2, buf, num_let);
		if (num_let == -1)
		{ dprintf(2, "Usage: %s filename text\n", av[0]);
			exit(1); }
	}
	c_1 = close(fd_1);
	c_2 = close(fd_2);
	if (c_1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n'", fd_1);
		exit(100);
	}
	if (c_2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n'", fd_2);
		exit(100);
	}
	return (0);
}
