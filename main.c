#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack_ps	*a;
	t_stack_ps	*b;
	char		**string_arg;

	string_arg = ft_parsing(ac, av);
	if (!a)
		ft_error_mssg();
	// gather_in_stack(&a, &string_arg);
	// if (!stack_is_sorted)
	// 	sort_stack(a);
	// ft_free_stack(&a);
	return (0);
}
