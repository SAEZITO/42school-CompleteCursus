/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpush_swap.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez   <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 10:50:48 by alsaez            #+#    #+#             */
/*   Updated: 2023/04/27 16:19:11 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPUSH_SWAP_H
# define CPUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	index;
	int	len;
	int	*o;
	int	mid;
	int	max;
	int	min;
	int	q1;
	int	q3;
	int	p1;
	int	p2;
	int	p3;
	int	p4;
	int	p6;
	int	p7;
	int	p8;
	int	p9;
}	t_stack;

void	push_a(t_stack *st);
void	push_b(t_stack *st);
void	swap_a(t_stack *st);
void	swap_b(t_stack *st);
void	sswap(t_stack *st);
void	rotate_b(t_stack *st);
void	rotate_a(t_stack *st);
void	ra_rb(t_stack *st);
void	r_rotate_b(t_stack *st);
void	r_rotate_a(t_stack *st);
void	r_ra_rb(t_stack *st);
void	fill_a(t_stack *st, char **argv);
void	fill_a_split(t_stack *st, char **splitted);
void	make_index(t_stack *st);
int		make_stackack(t_stack *st, int argc, char **argv);
int		is_sorted(t_stack *st);
void	exec(t_stack *st, char *str);
void	quick_free(t_stack *st, char *str);
int		check_sort(t_stack *st);
int		check_intmax(char *av);
int		check_arg2(char *str);

#endif
