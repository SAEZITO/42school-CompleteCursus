/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_clean.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 08:35:22 by alsaez            #+#    #+#             */
/*   Updated: 2023/04/26 08:15:31 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	search_chunk(t_stack *st, int min, int max, char c)
{
	int	i;

	i = 0;
	if (c == 'a')
	{
		while (i <= st->index - 1)
		{
			if (st->a[i] <= max && st->a[i] > min)
				return (1);
			i++;
		}
		return (0);
	}
	else
	{
		while (i <= (st->len - st->index) - 1)
		{
			if (st->b[i] <= max && st->b[i] > min)
				return (1);
			i++;
		}
		return (0);
	}
}

void	next_chunk_to_b(t_stack *st, int min, int max)
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
		}
	}
}

void	pushqa(t_stack *st, int min, int max)
{
	while (search_chunk(st, min, max, 'b'))
	{
		if (st->b[0] <= max)
		{
			push_a(st);
			if ((st->b[0] <= max && st->b[0] != biggest(st->p6, st, 'b'))
				|| (!search_chunk(st, min, max, 'b')))
				rotate_a(st, 0);
			else if (search_chunk(st, min, max, 'b'))
				ra_rb(st);
		}
		else if (st->b[0] == biggest(st->p6, st, 'b'))
			push_a(st);
		else
			rotate_b(st, 0);
	}
}

int	smallest(int min, t_stack *st, char c)
{
	int	small;
	int	i;

	i = 0;
	if (c == 'a')
	{
		small = st->max;
		while (i < st->index)
		{
			if (st->a[i] < small && st->a[i] > min)
				small = st->a[i];
			i++;
		}
	}
	if (c == 'b')
	{
		small = st->max;
		while (i < st->len - st->index)
		{
			if (st->b[i] < small && st->b[i] > min)
				small = st->b[i];
			i++;
		}
	}
	return (small);
}

int	biggest(int max, t_stack *st, char c)
{
	int	big;
	int	i;

	i = 0;
	if (c == 'a')
	{
		big = st->min;
		while (i < st->index)
		{
			if (st->a[i] > big && st->a[i] <= max)
				big = st->a[i];
			i++;
		}
	}
	if (c == 'b')
	{
		big = st->min;
		while (i < st->len - st->index)
		{
			if (st->b[i] > big && st->b[i] <= max)
				big = st->b[i];
			i++;
		}
	}
	return (big);
}
