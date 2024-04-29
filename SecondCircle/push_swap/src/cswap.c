/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cswap.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 16:34:54 by alsaez            #+#    #+#             */
/*   Updated: 2023/04/25 12:01:34 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cpush_swap.h"

void	swap_a(t_stack *st)
{
	int		temp;

	if (st->index <= 1)
		return ;
	temp = st->a[0];
	st->a[0] = st->a[1];
	st->a[1] = temp;
}

void	swap_b(t_stack *st)
{
	int		temp;

	if ((st->len - st->index) <= 1)
		return ;
	temp = st->b[0];
	st->b[0] = st->b[1];
	st->b[1] = temp;
}

void	sswap(t_stack *st)
{
	swap_a(st);
	swap_b(st);
}
