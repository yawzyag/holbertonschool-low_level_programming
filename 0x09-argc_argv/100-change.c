#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * centavo - convert to cent
 * @num: num to check
 *
 * Return: num
 */
int centavo(int coin)
{
	int cent1, cent2, cent3, cent4 = 0;
	int num = coin;

	if(num >= 25)
	{
		cent1 = num / 25;
		num = num % 25;
	}
	if(num >= 10)
        {
		cent2 = num / 10;
		num = num % 10;
        }
	if(num >= 5)
        {
		cent3 = num / 5;
		num = num % 5;
        }
	if(num >= 2)
        {
		cent4 = num / 2;
		num = num % 2;
        }

	return (cent1 + cent2 + cent3 + cent4 + num);
}

/**
 * main - Entry point
 * @argc: comand count
 * @argv: command passed
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
        if (argc != 2)
        {
                printf("Error\n");
        }
        else if (atoi(argv[1]) < 0)
        {
                printf("0\n");
        }
        else
                printf("%d\n", centavo(atoi(argv[1])));

        return (0);
}
