#include <stdio.h>

/**
 * main - print x shape with #
 * Return 0 on success
 */

int main(void)
{
	int n, i, j;

	printf("Enter number of rows: ");
	scanf("%d", &n);
	if (n < 0)
	{
		printf("Wrong input");
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j ++)
		{
			if (j == i || j == (n - i - 1))
				printf("#");
			else
				printf(" ");
		}
		printf("\n");
	}
	return (0);
}
