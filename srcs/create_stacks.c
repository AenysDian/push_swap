#include "../includes/push_swap.h"

t_main	*create_stacks(void)
{
	t_main	*main;

	main = (t_main *)malloc(sizeof(t_main));
	if (!main)
		exit(error("Error: malloc 'main'\n", NULL));
	main->a = NULL;
	main->b = NULL;
	main->numbers = 0;
	main->arr_char = NULL;
	return (main);
}
