/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 15:05:10 by malavaud          #+#    #+#             */
/*   Updated: 2026/02/24 15:05:10 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	valid_args(char **av)
{
	int	i;
	int	j;
	int	is_valid;

	i = 1;
	while (av[i])
	{
		is_valid = 0;
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] >= '0' && av[i][j] <= '9')
				is_valid = 1;
			j++;
		}
		if (is_valid == 0)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}

int	is_number(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		if ((str[i][j] == '-' || str[i][j] == '+') && str[i][j + 1] == '\0')
		{
			write(2, "Error\n", 6);
			return (0);
		}
		while (str[i][j])
		{
			if (!(str[i][j] >= '0' && str[i][j] <= '9') &&
				!((str[i][j] == '-' || str[i][j] == '+') && j == 0))
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

long long	ft_atoi(const char *str)
{
	int			i;
	long long	sign;
	long long	nbr;

	i = 0;
	nbr = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	return (nbr * sign);
}
