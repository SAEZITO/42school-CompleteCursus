/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_clean.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:39:24 by alsaez            #+#    #+#             */
/*   Updated: 2023/04/26 08:20:10 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	first_part(t_stack *st)
{
	while (st->index > 0)
		push_b(st);
	sort_q(st, st->p9, st->max);
	while (st->a[st->index - 1] != st->max)
		rotate_a(st, 0);
	sort_q(st, st->p8, st->p9);
	while (st->a[st->index - 1] != st->max)
		r_rotate_a(st, 0);
	sort_q(st, st->p7, st->p8);
	while (st->a[st->index - 1] != st->max)
		r_rotate_a(st, 0);
	sort_q(st, st->p6, st->p7);
	while (st->a[st->index - 1] != st->max)
		r_rotate_a(st, 0);
	pushq1q6(st);
	next_chunk_to_b(st, st->mid, st->p6);
	sort_q(st, st->mid, st->p6);
	while (st->a[st->index - 1] > st->p1)
		r_rotate_a(st, 0);
	pushqa(st, st->p1, st->p2);
	sort_q(st, st->p4, st->mid);
	while (st->a[st->index - 1] > st->p2)
		r_rotate_a(st, 0);
	pushqa(st, st->p2, st->p3);
	sort_q(st, st->p3, st->p4);
}

void	second_part(t_stack *st)
{
	while (st->a[st->index - 1] > st->p3)
		r_rotate_a(st, 0);
	while (st->a[st->index - 1] > st->p2)
	{
		if (st->b[0] != smallest(st->min, st, 'b')
			&& (st->b[0] != biggest(st->max, st, 'b'))
			&& (st->len - st->index > 2))
			r_ra_rb(st);
		else
			r_rotate_a(st, 0);
		if (st->a[0] != biggest(st->p3, st, 'a'))
			push_b(st);
	}
	sort_q(st, st->p2, st->p3);
	while (st->a[st->index - 1] > st->p2)
		r_rotate_a(st, 0);
}

void	third_part(t_stack *st)
{
	while (st->a[st->index - 1] > st->p1)
	{
		if (st->b[0] != smallest(st->min, st, 'b')
			&& (st->b[0] != biggest(st->max, st, 'b'))
			&& (st->len - st->index > 2))
			r_ra_rb(st);
		else
			r_rotate_a(st, 0);
		if (st->a[0] != biggest(st->p2, st, 'a'))
			push_b(st);
	}
}

void	last_part(t_stack *st)
{
	sort_q(st, st->p1, st->p2);
	while (st->a[st->index - 1] > st->p1)
		r_rotate_a(st, 0);
	while (st->a[st->index - 1] != st->max)
	{
		r_rotate_a(st, 0);
		push_b(st);
	}
	sort_q(st, st->min, st->p2);
	while (st->a[st->index - 1] != st->max)
		r_rotate_a(st, 0);
	if (st->b[0] == st->o[0])
		push_a(st);
}

void	algo_clean(t_stack *st)
{
	if (st->len <= 10)
	{
		while (st->index > 0)
			push_b(st);
		sort_q(st, st->min, st->max);
		while (st->a[0] != st->o[1])
			r_rotate_a(st, 0);
		push_a(st);
	}
	else
	{
		q1q2q5q6_q3q4_to_b(st);
		dual_chunk_to_b(st, st->p6, st->p7, st->p8);
		next_chunk_to_b(st, st->p8, st->p9);
		first_part(st);
		second_part(st);
		third_part(st);
		last_part(st);
	}
}
