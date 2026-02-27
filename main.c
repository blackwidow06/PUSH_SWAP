/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:44:30 by malavaud          #+#    #+#             */
/*   Updated: 2026/02/27 10:48:25 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_split(char **split)
{
	int	count;

	count = 0;
	while (split[count])
		count++;
	return (count);
}

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;
	char	**split;

	if (ac < 2)
		return (0);
	split = parse_string(ac, av);
	if (!split)
		return (0);
	a.value = malloc(sizeof(int) * count_split(split));
	b.value = malloc(sizeof(int) * count_split(split));
	a.size = 0;
	b.size = 0;
	fill_stack(&a, split);
	free_split(split);
	push_swap(&a, &b);
	free(a.value);
	free(b.value);
	return (0);
}
