/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 16:35:20 by alsaez            #+#    #+#             */
/*   Updated: 2023/04/26 09:14:07 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

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
void	swap_a(t_stack *st, int flag);
void	swap_b(t_stack *st, int flag);
void	sswap(t_stack *st);
void	rotate_b(t_stack *st, int flag);
void	rotate_a(t_stack *st, int flag);
void	ra_rb(t_stack *st);
void	r_rotate_b(t_stack *st, int flag);
void	r_rotate_a(t_stack *st, int flag);
void	r_ra_rb(t_stack *st);
void	fill_a(t_stack *st, char **argv);
void	fill_a_split(t_stack *st, char **splitted);
void	make_index(t_stack *st);
int		make_stackack(t_stack *st, int argc, char **argv);
int		is_sorted(t_stack *st);
int		search_chunk(t_stack *st, int min, int max, char c);
void	search_rotate_b(t_stack *st, int i, int small);
void	search_r_rotate_b(t_stack *st, int j, int small);
int		smallest(int min, t_stack *st, char c);
int		biggest(int max, t_stack *st, char c);
void	next_chunk_to_b(t_stack *st, int min, int max);
void	q1q2q5q6_q3q4_to_b(t_stack *st);
void	sort_q(t_stack *st, int min, int max);
void	pushq1q6(t_stack *st);
void	pushqa(t_stack *st, int min, int max);
void	algo_clean(t_stack *st);
void	first_part(t_stack *st);
void	second_part(t_stack *st);
void	third_part(t_stack *st);
void	last_part(t_stack *st);
void	dual_chunk_to_b(t_stack *st, int min, int mid, int max);
void	algo_nul(t_stack *st);
void	algo_nul_reborn(t_stack *st);
void	w_error(t_stack *st);
int		check_intmax(char *av);
int		check_arg2(char *str);

#endif
