/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_clean3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez   <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 09:43:28 by alsaez            #+#    #+#             */
/*   Updated: 2023/04/26 08:32:20 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	dual_chunk_to_b(t_stack *st, int min, int mid, int max)
{
	int	i;

	i = -1;
	while (search_chunk(st, min, max, 'a') == 1)
	{
		i++;
		if (st->a[i] <= max)
		{
			while (i-- > 0)
				rotate_a(st, 0);
			push_b(st);
			if (st->b[0] > mid && st->a[0] > max)
				ra_rb(st);
			else if (st->b[0] > mid)
				rotate_b(st, 0);
		}
	}
}

void	algo_nul(t_stack *st)
{
	if (st->a[0] < st->a[1])
	{
		if (st->a[0] < st->a[st->index - 1])
		{
			r_rotate_a(st, 0);
			swap_a(st, 0);
		}
		else
			r_rotate_a(st, 0);
	}
	else
	{
		if (st->a[0] > st->a[2] && st->a[1] > st->a[2])
		{
			swap_a(st, 0);
			r_rotate_a(st, 0);
		}
		else if (st->a[0] < st->a[2] && st->a[1] < st->a[2])
			swap_a(st, 0);
		else
			rotate_a(st, 0);
	}
	return ;
}

void	algo_nul_reborn(t_stack *st)
{
	while (st->a[0] != st->o[0] && st->a[0] != st->o[1])
		rotate_a(st, 0);
	push_b(st);
	if (st->index > 3)
	{
		while (st->a[0] != st->o[0] && st->a[0] != st->o[1])
			rotate_a(st, 0);
		push_b(st);
	}
	algo_nul(st);
	if (st->len - st->index == 2)
	{
		if (st->b[0] < st->b[1])
			swap_b(st, 0);
	}
	push_a(st);
	push_a(st);
	return ;
}
