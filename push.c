/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:44:54 by malavaud          #+#    #+#             */
/*   Updated: 2026/01/05 10:44:54 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack *a, t_stack *b)
{
	if (is_empty(b))
		return ;
	push(a, peek(b));
	pop(b);
	write(1, "pa\n", 3);
}

void	push_b(t_stack *b, t_stack *a)
{
	int	tmp;

	tmp = peek(a);
	if (is_empty(a))
		return ;
	push(b, tmp);
	pop(a);
	write(1, "pb\n", 3);
}
