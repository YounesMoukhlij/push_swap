#include "push_swap.h"

void	ft_error_mssg(void)
{
	write(1, "Error Try Again\n", 16);
	exit(EXIT_FAILURE);
}

long	ft_atoi(char *s)
{
	int		signe;
	long	res;

	res = 0;
	signe = 1;
	while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\f'
		|| *s == '\v' || *s == '\r')
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			signe = -1;
		s++;
	}
	while (*s && (*s >= '0' && *s <= '9'))
	{
		res = res * 10 + (*s - 48);
		s++;
	}
	if ((res * signe) > 2147483647 || (res * signe) < -2147483648)
		ft_error_mssg();
	return (res * signe);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
