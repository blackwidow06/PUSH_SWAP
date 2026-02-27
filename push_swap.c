/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:44:40 by malavaud          #+#    #+#             */
/*   Updated: 2026/02/27 10:45:10 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_index(t_stack *a)
{
	int	*sort;
	int	i;
	int	j;

	sort = copy_stack(a);
	sort_stack(sort, a->size);
	i = 0;
	while (i < a->size)
	{
		j = 0;
		while (j < a->size)
		{
			if (a->value[i] == sort[j])
			{
				a->value[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	free(sort);
}

static void	radix(t_stack *a, t_stack *b, int bit)
{
	int	size;
	int	i;
	int	num;

	size = a->size;
	i = 0;
	while (i < size)
	{
		num = peek(a);
		if (((num >> bit) & 1) == 0)
			push_b(b, a);
		else
			rotate_a(a);
		i++;
	}
	while (!is_empty(b))
		push_a(a, b);
}

static void	radix_sort(t_stack *a, t_stack *b)
{
	int	max_num;
	int	max_bits;
	int	bit;

	if (a->size < 2)
		return ;
	max_num = a->size - 1;
	max_bits = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	bit = 0;
	while (bit < max_bits)
	{
		radix(a, b, bit);
		bit++;
	}
}

void	push_swap(t_stack *a, t_stack *b)
{
	if (is_sorted(a))
		return ;
	ft_index(a);
	if (a->size == 2)
		sort_2(a);
	else if (a->size == 3)
		sort_3(a);
	else if (a->size == 4)
		sort_4(a, b);
	else if (a->size == 5)
		sort_5(a, b);
	else
		radix_sort(a, b);
}
