/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 16:34:23 by alsaez            #+#    #+#             */
/*   Updated: 2023/04/25 10:56:24 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cpush_swap.h"

void	rotate_a(t_stack *st)
{
	int	i;
	int	temp;

	temp = st->a[0];
	i = 0;
	while (i < st->index - 1)
	{
		st->a[i] = st->a[i + 1];
		i++;
	}
	st->a[st->index - 1] = temp;
}

void	rotate_b(t_stack *st)
{
	int	i;
	int	temp;

	temp = st->b[0];
	i = 0;
	while (i < (st->len - st->index - 1))
	{
		st->b[i] = st->b[i + 1];
		i++;
	}
	st->b[(st->len - st->index) - 1] = temp;
}

void	ra_rb(t_stack *st)
{
	rotate_a(st);
	rotate_b(st);
}
