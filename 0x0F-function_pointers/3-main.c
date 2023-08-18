#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - the boss
 *
 * @argc : ...
 * @argv : ...
 *
 *
 * Return: ...
 *
 */

int main(int argc, char *argv[])
{
	int lol = argc;

	int a = atoi(argv[1]);

	int b = atoi(argv[3]);

	char *s = argv[2];

	int eq = get_op_func(*s)(a, b);

	if (lol == 3)
	{
		printf("\n");
	}
	printf("%d\n", eq);
	return (0);
}
