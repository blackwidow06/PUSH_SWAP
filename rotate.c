/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:45:10 by malavaud          #+#    #+#             */
/*   Updated: 2026/01/05 10:45:10 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack *s)
{
	int	tmp;
	int	i;

	if (s->size < 2)
		return ;
	tmp = s->value[0];
	i = 0;
	while (i < s->size - 1)
	{
		s->value[i] = s->value[i + 1];
		i++;
	}
	s->value[s->size - 1] = tmp;
}

void	rotate_a(t_stack *a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	rotate_b(t_stack *b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rotate_rr(t_stack *a, t_stack *b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
