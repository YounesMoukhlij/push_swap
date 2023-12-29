#include "push_swap.h"

int	ft_arguments_check(char **s, int ac)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < ac - 1)
	{
		i = 0;
		while (s[j][i])
		{
			if (s[j][i] == '-' || s[j][i] == '+')
				i++;
			if (!(s[j][i] >= '0' && s[j][i] <= '9'))
				return (0);
			i++;
		}
		if (ft_atoi(s[j]) > INT_MAX || ft_atoi(s[j]) < INT_MIN)
			return (0);
		j++;
	}
	return (1);
}
