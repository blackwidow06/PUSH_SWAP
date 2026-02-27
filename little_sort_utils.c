/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:03:52 by malavaud          #+#    #+#             */
/*   Updated: 2026/02/27 10:43:54 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_position(t_stack *a)
{
	int	i;
	int	min;
	int	pos;

	i = 0;
	min = a->value[0];
	pos = 0;
	while (i < a->size)
	{
		if (a->value[i] < min)
		{
			min = a->value[i];
			pos = i;
		}
		i++;
	}
	return (pos);
}

void	bring_min_to_top(t_stack *a)
{
	int	pos;

	pos = find_min_position(a);
	if (pos <= a->size / 2)
	{
		while (pos > 0)
		{
			rotate_a(a);
			pos--;
		}
	}
	else
	{
		pos = a->size - pos;
		while (pos > 0)
		{
			reverse_rotate_a(a);
			pos--;
		}
	}
}
