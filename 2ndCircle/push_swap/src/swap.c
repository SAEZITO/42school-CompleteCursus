/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 16:34:54 by alsaez            #+#    #+#             */
/*   Updated: 2023/03/30 16:35:00 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap_a(t_stack *st, int flag)
{
	int		temp;

	if (st->index <= 1)
		return ;
	temp = st->a[0];
	st->a[0] = st->a[1];
	st->a[1] = temp;
	if (flag != 1)
		write(1, "sa\n", 3);
}

void	swap_b(t_stack *st, int flag)
{
	int		temp;

	if ((st->len - st->index) <= 1)
		return ;
	temp = st->b[0];
	st->b[0] = st->b[1];
	st->b[1] = temp;
	if (flag != 1)
		write(1, "sb\n", 3);
}

void	sswap(t_stack *st)
{
	int		flag;

	flag = 1;
	swap_a(st, flag);
	swap_b(st, flag);
	write(1, "ss\n", 3);
}
