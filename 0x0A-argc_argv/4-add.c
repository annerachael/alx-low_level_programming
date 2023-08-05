#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i, j, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	if (argc <= 1)
	{
		printf("0\n");
	}
	else
		printf("%d\n", sum);

	return (0);
}
