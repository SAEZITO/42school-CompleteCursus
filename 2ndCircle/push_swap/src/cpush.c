/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpush.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 16:34:08 by alsaez            #+#    #+#             */
/*   Updated: 2023/04/25 10:56:40 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cpush_swap.h"

void	push_a(t_stack *st)
{
	int	i;
	int	temp;

	temp = st->b[0];
	i = 0;
	if (st->index < st->len)
	{
		while (i < st->len - 1)
		{
			st->a[st->len - (i + 1)] = st->a[st->len - (i + 2)];
			st->b[i] = st->b[i + 1];
			i++;
		}
		st->b[st->len - st->index - 1] = 0;
		st->index++;
		st->a[0] = temp;
	}
}

void	push_b(t_stack *st)
{
	int	i;
	int	temp;

	temp = st->a[0];
	i = 0;
	if (st->index > 0)
	{
		while (i < st->len - 1)
		{
			st->b[st->len - (i + 1)] = st->b[st->len - (i + 2)];
			st->a[i] = st->a[i + 1];
			i++;
		}
		st->a[st->index - 1] = 0;
		st->index--;
		st->b[0] = temp;
	}
}
