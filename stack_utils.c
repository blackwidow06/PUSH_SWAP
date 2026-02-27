/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:45:26 by malavaud          #+#    #+#             */
/*   Updated: 2026/01/05 10:45:26 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_empty(t_stack *stack)
{
	if (stack->size == 0)
		return (1);
	return (0);
}

int	push(t_stack *stack, int elem)
{
	int	i;

	i = stack->size;
	while (i > 0)
	{
		stack->value[i] = stack->value[i - 1];
		i--;
	}
	stack->value[0] = elem;
	stack->size++;
	return (1);
}

int	pop(t_stack *stack)
{
	int	i;

	if (is_empty(stack))
		return (0);
	i = 0;
	while (i < stack->size - 1)
	{
		stack->value[i] = stack->value[i + 1];
		i++;
	}
	stack->size--;
	return (1);
}

int	peek(t_stack *stack)
{
	if (is_empty(stack))
		return (0);
	return (stack->value[0]);
}
