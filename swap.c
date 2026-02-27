/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:45:32 by malavaud          #+#    #+#             */
/*   Updated: 2026/01/05 10:45:32 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack *stack)
{
	int	tmp;

	if (stack->size < 2)
		return ;
	tmp = stack->value[stack->size - 2];
	stack->value[stack->size - 2] = stack->value[stack->size - 1];
	stack->value[stack->size - 1] = tmp;
}

void	swap_a(t_stack *a)
{
	ft_swap(a);
	write(1, "sa\n", 3);
}

void	swap_b(t_stack *b)
{
	ft_swap(b);
	write(1, "sb\n", 3);
}

void	swap_ss(t_stack *a, t_stack *b)
{
	ft_swap(a);
	ft_swap(b);
	write(1, "ss\n", 3);
}
