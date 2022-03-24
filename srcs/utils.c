#include "../includes/push_swap.h"

int	len_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

int	error(char *str, t_main *main)
{
	ft_putstr_fd(str, 2);
	//free_main(main);
	return (1);
}

void	print_result(char *res)
{
	ft_putstr_fd(res, 1);
	ft_putchar_fd('\n', 1);
	free (res);
	res = NULL;
}
