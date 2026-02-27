/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:45:03 by malavaud          #+#    #+#             */
/*   Updated: 2026/01/05 10:45:03 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack *s)
{
	int	tmp;
	int	i;

	if (s->size < 2)
		return ;
	tmp = s->value[s->size - 1];
	i = s->size - 1;
	while (i > 0)
	{
		s->value[i] = s->value[i - 1];
		i--;
	}
	s->value[0] = tmp;
}

void	reverse_rotate_a(t_stack *a)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_stack *b)
{
	reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	reverse_rotate_rr(t_stack *a, t_stack *b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
}
