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
        int (*oprp)(int , int);

        if (argc != 4)
        {
                printf("error!!!!!!!");
                exit(98);
        }
        oprp = get_op_func(argv[2]);

        printf("%d\n", oprp(atoi(argv[1]),atoi(argv[3])));
        return (0);
}

