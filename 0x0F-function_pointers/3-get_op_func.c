#include "_3-calc.h_"
/**
 * get_op_func - function that selects the correct function to perform
 * the operation asked by the user.
 *
 * @s: operator passed.
 *
 * Return: pointer to the function.
 */
int (*get_op_func(char *s))(int, int)
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

	while (ops[i])
	{
		if (s == ops[i][0])
			return (ops[i][1]);
		i++;
	}
	return (NULL);
}
