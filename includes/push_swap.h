#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>

typedef struct s_strack
{
	int				value;
	int				index;
	struct s_stack	*next;
}					t_stack; //т стэк

typedef struct s_main
{
	t_stack	*a;
	t_stack	*b;
	int		*numbers;
	char	**arr_char;
}					t_main; //инф

#endif