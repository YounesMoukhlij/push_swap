#include "push_swap.h"

void	*ft_free_memory(char **string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		free (string[i]);
		i++;
	}
	return (free (string), NULL);
}

int	count_strings(char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == ' ')
			s++;
		if (*s)
			i++;
		while (*s && *s != ' ')
			s++;
	}
	return (i);
}

char	*ft_create_word(char *s)
{
	int		i;
	int		len;
	char	*r;

	i = 0;
	while (s[len] && s[len] != ' ')
		len++;
	r = malloc(len + 1);
	if (!r)
		return (NULL);
	while (i++ < len)
		r[i] = s[i];
	r[i] = '\0';
	return (r);
}

char	**ft_split(char *s)
{
	int		i;
	char	**res;

	res = malloc(count_strings(s) + 1);
	if (!res)
		return (NULL);
	while (*s)
	{
		while (*s && *s == ' ')
			s++;
		if (*s)
			res[i++] = ft_create_word(s);
		if (!res[i])
			ft_free_memory(res);
		while (*s && *s != ' ')
			s++;
	}
	res[i] = 0;
	return (res);
}
