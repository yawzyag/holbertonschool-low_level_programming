#include "3-calc.h"

/**
 * main - Entry point
 * @argc: comand count
 * @argv: command passed
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if(argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if(argv[2][1] != 0)
	{
		printf("Error\n");
		exit(99);
	}
	if((argv[2][0] == '/' || argv [2][0]) && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}
/* call get op func*/
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
