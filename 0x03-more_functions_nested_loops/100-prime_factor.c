#include <stdio.h>

int main(void)
{
	long i;
	long num = 612852475143;

	for (i = 2; num > i; i++)
	{
		if (num % i == 0)
		{
			num = num / i;
			i = 2;
		}
	}
	printf("%li\n", i);
	return (0);
}
