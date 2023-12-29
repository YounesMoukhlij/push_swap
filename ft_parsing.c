#include "push_swap.h"

int	check_if_doubles(char **s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = i + 1;
		while (s[j])
		{
			if (ft_atoi(s[i]) == ft_atoi(s[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	**ft_parsing(int ac, char **av)
{
	char	**string_arg;
	int		i;

	i = 0;
	if (ac < 2)
		ft_error_mssg();
	if (ac == 2)
		string_arg = ft_split(av[1]);
	if (ac > 2)
		string_arg = ft_split(ft_strjoin(ac, av + 1));
	if (ft_arguments_check(string_arg, ac) == 0)
		ft_error_mssg();
	if (check_if_doubles(string_arg) == 0)
		ft_error_mssg();
	return (string_arg);
}
