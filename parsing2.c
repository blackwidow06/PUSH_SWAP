/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:55:34 by malavaud          #+#    #+#             */
/*   Updated: 2026/02/27 10:22:08 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_int(const char *str)
{
	long long	value;

	value = ft_atoi(str);
	if (value > 2147483647 || value < -2147483648)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (1);
}

static int	ft_duplicate(char **tab)
{
	int	i;
	int	j;

	i = 1;
	while (tab[i])
	{
		j = 0;
		while (tab[j])
		{
			if (ft_atoi(tab[i]) == ft_atoi(tab[j]) && i != j)
			{
				write(2, "Error\n", 6);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

static char	**join_args(int ac, char *av[])
{
	char	*join;
	char	*tmp;
	char	**split;
	int		i;

	join = ft_strjoin("", av[1]);
	if (!join)
		return (NULL);
	i = 1;
	while (i++ < ac - 1)
	{
		tmp = ft_strjoin(join, av[i]);
		free(join);
		join = tmp;
		if (!join)
			return (NULL);
	}
	split = ft_split(join, ' ');
	free(join);
	return (split);
}

char	**parse_string(int ac, char *av[])
{
	char	**split;
	int		i;

	if (!valid_args(av))
		return (NULL);
	split = join_args(ac, av);
	if (!split)
		return (NULL);
	if (!is_number(split) || !ft_duplicate(split))
		return (free_split(split), NULL);
	i = 0;
	while (split[i])
	{
		if (!check_int(split[i]))
		{
			free_split(split);
			return (NULL);
		}
		i++;
	}
	return (split);
}
