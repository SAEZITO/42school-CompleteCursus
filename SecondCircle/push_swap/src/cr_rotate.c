/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cr_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 16:34:39 by alsaez            #+#    #+#             */
/*   Updated: 2023/04/25 10:56:52 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cpush_swap.h"

void	r_rotate_a(t_stack *st)
{
	int	i;
	int	temp;

	temp = st->a[st->index - 1];
	i = 0;
	while (i < st->index - 1)
	{
		st->a[st->index - (i + 1)] = st->a[st->index - (i + 2)];
		i++;
	}
	st->a[0] = temp;
}

void	r_rotate_b(t_stack *st)
{
	int	i;
	int	temp;

	temp = st->b[st->len - st->index - 1];
	i = 0;
	while (i < (st->len - st->index - 1))
	{
		st->b[st->len - st->index - (i + 1)] = st->b[st->len
			- st->index - (i + 2)];
		i++;
	}
	st->b[0] = temp;
}

void	r_ra_rb(t_stack *st)
{
	r_rotate_a(st);
	r_rotate_b(st);
}
