/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_clean2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:39:24 by alsaez            #+#    #+#             */
/*   Updated: 2023/04/26 08:17:11 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	q1q2q5q6_q3q4_to_b(t_stack *st)
{
	int	i;

	i = -1;
	while (search_chunk(st, st->min, st->p6, 'a') == 1)
	{
		i++;
		if (st->a[i] <= st->p6)
		{
			while (i-- > 0)
				rotate_a(st, 0);
			push_b(st);
		}
		if ((st->b[0] > st->p1 && st->b[0] <= st->p2
				&& (st->len - st->index) >= 2) || (st->b[0] > st->p4
				&& st->b[0] <= st->mid && (st->len - st->index) >= 2))
		{
			if (st->a[0] > st->p6)
				ra_rb(st);
			else
				rotate_b(st, 0);
		}
	}
}

void	pushq1q6(t_stack *st)
{
	while ((search_chunk(st, st->min - 1, st->p1, 'b') == 1)
		|| (search_chunk(st, st->mid, st->p6, 'b')))
	{
		if (st->b[0] <= st->p1)
		{
			push_a(st);
			if (st->b[0] <= st->p1 || st->b[0] > st->mid)
				rotate_a(st, 0);
			else if ((search_chunk(st, st->min - 1, st->p1, 'b') == 1)
				|| (search_chunk(st, st->mid, st->p6, 'b')))
				ra_rb(st);
		}
		else if (st->b[0] > st->mid)
			push_a(st);
		else
			rotate_b(st, 0);
	}
}

void	sort_q(t_stack *st, int min, int max)
{	
	int	i;
	int	j;
	int	small;
	int	big;

	while (search_chunk(st, min, max, 'b') == 1)
	{
		i = 0;
		j = st->len - st->index - 1;
		small = smallest(min, st, 'b');
		big = biggest(max, st, 'b');
		while (st->b[i] != small && st->b[i] != big)
			i++;
		while (st->b[j] != small && st->b[j] != big)
			j--;
		if (i + j < (st->len - st->index))
			search_rotate_b(st, i, small);
		else if (j >= 0)
			search_r_rotate_b(st, j, small);
	}
}

void	search_rotate_b(t_stack *st, int i, int small)
{
	while (i-- > 0)
		rotate_b(st, 0);
	push_a(st);
	if (st->a[0] == small)
		rotate_a(st, 0);
}

void	search_r_rotate_b(t_stack *st, int j, int small)
{
	while (j++ < (st->len - st->index))
		r_rotate_b(st, 0);
	push_a(st);
	if (st->a[0] == small)
		rotate_a(st, 0);
}
