#include <stdio.h>

/**
* main - Entry point
*
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	long int num1 = 1, num2 = 2, fib, first_num, last_num;
	long int fib_first, fib_last, num_part1, num_part2;

	for (i = 2; i <= 99; i++)
	{
		if (i > 2 && i <= 99)
		{
			printf(", "); }
		if (i < 92)
		{
			fib = num1;
			num1 = num2;
			num2 = fib + num1;
			printf("%lu", fib); }
		else if (i == 92)
		{
			first_num = (fib / 100000000000);
			last_num = (fib % 100000000000);
			fib_first = (num1 / 100000000000);
			fib_last = (num1 % 100000000000);
			printf("%lu%lu", fib_first, fib_last); }
		else
		{
			num_part1 = first_num + fib_first;
			num_part2 = last_num + fib_last;
			printf("%lu%lu", num_part1, num_part2);
			first_num = fib_first;
			fib_first = num_part1;
			last_num = fib_last;
			fib_last = num_part2;
			if (i > 96)
			{
				first_num++;
				last_num = last_num - 100000000000; }
		}}
	printf("\n");
	return (0);
}
