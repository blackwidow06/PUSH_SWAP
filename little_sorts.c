/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sorts.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:44:18 by malavaud          #+#    #+#             */
/*   Updated: 2026/02/27 10:44:23 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack *stack)
{
	if (stack->value[0] > stack->value[1])
		swap_a(stack);
}

void	sort_3(t_stack *stack)
{
	int	a;
	int	b;	
	int	c;

	a = stack->value[0];
	b = stack->value[1];
	c = stack->value[2];
	if (a < b && b < c)
		return ;
	if (a > b && b < c && a < c)
		swap_a(stack);
	else if (a > b && b > c)
	{
		swap_a(stack);
		reverse_rotate_a(stack);
	}
	else if (a < b && b > c && a < c)
	{
		swap_a(stack);
		rotate_a(stack);
	}
	else if (a > b && b < c && a > c)
		rotate_a(stack);
	else if (a < b && b > c && a > c)
		reverse_rotate_a(stack);
}

void	sort_4(t_stack *a, t_stack *b)
{
	bring_min_to_top(a);
	push_b(b, a);
	sort_3(a);
	push_a(a, b);
}

void	sort_5(t_stack *a, t_stack *b)
{
	bring_min_to_top(a);
	push_b(b, a);
	bring_min_to_top(a);
	push_b(b, a);
	sort_3(a);
	push_a(a, b);
	push_a(a, b);
	if (a->value[0] > a->value[1])
		swap_a(a);
}
