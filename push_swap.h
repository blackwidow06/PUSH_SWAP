/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:44:49 by malavaud          #+#    #+#             */
/*   Updated: 2026/02/27 10:41:48 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>

typedef struct s_stack
{
	int	*value;
	int	size;
	int	size_max;
}				t_stack;

/* stack_utils.c */
int			is_empty(t_stack *stack);
int			push(t_stack *stack, int elem);
int			pop(t_stack *stack);
int			peek(t_stack *stack);

/* swap.c */
void		ft_swap(t_stack *stack);
void		swap_a(t_stack *a);
void		swap_b(t_stack *b);
void		swap_ss(t_stack *a, t_stack *b);

/* push.c */
void		push_a(t_stack *a, t_stack *b);
void		push_b(t_stack *b, t_stack *a);

/* rotate.c */
void		rotate(t_stack *s);
void		rotate_a(t_stack *a);
void		rotate_b(t_stack *b);
void		rotate_rr(t_stack *a, t_stack *b);

/* reverse.c */
void		reverse_rotate(t_stack *s);
void		reverse_rotate_a(t_stack *a);
void		reverse_rotate_b(t_stack *b);
void		reverse_rotate_rr(t_stack *a, t_stack *b);

/* ft_split.c */
void		free_split(char **tab);
char		**ft_split(char const *s, char c);

/* ft_join.c */
char		*ft_strjoin(char const *s1, char const *s2);

/* little_sort_utils.c */
int			find_min_position(t_stack *a);
void		bring_min_to_top(t_stack *a);

/* little_sort.c */
void		sort_2(t_stack *stack);
void		sort_3(t_stack *stack);
void		sort_4(t_stack *a, t_stack *b);
void		sort_5(t_stack *a, t_stack *b);

/* parsing1.c */
long long	ft_atoi(const char *str);
int			valid_args(char **av);
int			is_number(char **str);

/* parsing2.c */
int			check_int(const char *str);
char		**parse_string(int ac, char *av[]);

/* sort_utils.c */
int			*copy_stack(t_stack *a);
void		sort_stack(int *tab, int size);
int			is_sorted(t_stack *a);
void		fill_stack(t_stack *a, char **split);

/* push_swap.c */
void		push_swap(t_stack *a, t_stack *b);

#endif