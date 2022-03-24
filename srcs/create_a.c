#include "../includes/push_swap.h"

static t_stack	*init_new_stack(t_main *main)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		exit(error("Error: malloc 'stack A'\n", main));
	new->value = 0;
	new->index = 0;
	new->next = NULL;
}

t_stack	*create_stack_a(t_main *main)
{
	t_stack	*stack_a;
	t_stack	*tmp;
	int		i;

	stack_a = init_new_stack(main);
	tmp = stack_a;
	i = 0;
	while (main->arr_char[i])
	{
		tmp->value = ft_atoi(main->arr_char[i]);
		if (main->arr_char[i + 1])
		{
			tmp->next = init_new_stack(main);
			tmp = tmp->next;
		}
		i++;
	}
	return (stack_a);
}
