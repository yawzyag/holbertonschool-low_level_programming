#include "holberton.h"

int main(int argc, char **argv)
{
	FILE *fp;
	char buff[255];

	(void) argc;
	fp = fopen(argv[1], "r");
	if (fp == NULL) {
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fgets(buff, 255, fp);
	printf("%s\n", buff);
	fclose(fp);

	return 0;
}
