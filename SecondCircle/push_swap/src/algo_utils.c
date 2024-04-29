/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:39:24 by alsaez            #+#    #+#             */
/*   Updated: 2023/04/20 18:36:25 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	fill_o(t_stack *st)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	j = 0;
	index = 1;
	st->o = ft_calloc(st->len + 1, sizeof(int));
	while (i < st->len)
	{
		while (j < st->len)
			if (st->a[i] < st->a[j++])
				index++;
		st->o[st->len - index] = st->a[i];
		j = 0;
		index = 1;
		i++;
	}
}

void	make_index(t_stack *st)
{
	fill_o(st);
	st->mid = st->o[((int)(st->len * 0.5))];
	st->min = st->o[0];
	st->max = st->o[st->len - 1];
	st->p1 = st->o[((int)(st->len * 0.1))];
	st->p2 = st->o[((int)(st->len * 0.2))];
	st->p3 = st->o[((int)(st->len * 0.3))];
	st->p4 = st->o[((int)(st->len * 0.4))];
	st->p6 = st->o[((int)(st->len * 0.6))];
	st->p7 = st->o[((int)(st->len * 0.7))];
	st->p8 = st->o[((int)(st->len * 0.8))];
	st->p9 = st->o[((int)(st->len * 0.9))];
}

int	is_sorted(t_stack *st)
{
	int	i;

	i = 0;
	if (st->index == st->len)
	{
		while ((i + 1) < st->len)
		{
			if (st->a[i] < st->a[i + 1])
				i++;
			else
				return (0);
		}
		return (1);
	}
	else
		return (0);
}
