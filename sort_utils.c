/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:45:16 by malavaud          #+#    #+#             */
/*   Updated: 2026/02/27 10:46:10 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack(t_stack *a, char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		if (!check_int(split[i]))
		{
			write(2, "Error\n", 6);
			return ;
		}
		a->value[a->size] = ft_atoi(split[i]);
		a->size++;
		i++;
	}
}

int	is_sorted(t_stack *a)
{
	int	i;

	i = 0;
	while (i < a->size - 1)
	{
		if (a->value[i] > a->value[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	*copy_stack(t_stack *a)
{
	int	*copy;
	int	i;

	i = 0;
	copy = malloc(sizeof(int) * a->size);
	while (i < a->size)
	{
		copy[i] = a->value[i];
		i++;
	}
	return (copy);
}

void	sort_stack(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
