#include "3-calc.h"
#include <stdio.h>
/**
 * get_ob_func - ...
 *
 * @s : ...
 *
 * Return : pointer to function
 *
 */
int (*get_op_func(char *s))(int , int )
{
	  op_t ops[] = {
       	 {"+", op_add},
       	 {"-", op_sub},
       	 {"*", op_mul},
       	 {"/", op_div},
       	 {"%", op_mod},
       	 {NULL, NULL}
    };
    int i = 0;
    while (i <5){
    	if (ops[i].op == s)
    	{
		break;
	    	
    	}
    }
return (ops[i].f);
}
