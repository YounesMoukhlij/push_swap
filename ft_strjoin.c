#include "push_swap.h"

int	getlen_for_strjoin(int ac, char **s)
{
	int	i;
	int	len;

	while (i < ac)
	{
		len += ft_strlen(s[i]);
		if (i < ac - 1)
			len += 1;
		i++;
	}
	return (len);
}

char	*copy_to_string(char **av, char *res, int ac)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 1;
	while (k < ac - 1)
	{
		j = 0;
		while (res[j])
			j++;
		while (av[k][i] != '\0')
		{
			res[j + i] = av[k][i];
			if (i < ac - 1)
				res[++i] = ' ';
			i++;
		}
	}
	res[j + i] = '\0';
	return (res);
}

char	*ft_strjoin(int ac,char **av)
{
	char	*s;

	if (ac == 1)
		return (NULL);
	s = malloc(getlen_for_strjoin(ac - 1, av) + 1);
	if (!s)
		return (NULL);
	s[0] = '\0';
	return (copy_to_string(av, s, ac - 1));
}
