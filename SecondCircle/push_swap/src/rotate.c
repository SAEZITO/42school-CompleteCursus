/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 16:34:23 by alsaez            #+#    #+#             */
/*   Updated: 2023/03/30 16:34:25 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate_a(t_stack *st, int flag)
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
	if (flag != 1)
		write(1, "ra\n", 3);
}

void	rotate_b(t_stack *st, int flag)
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
	if (flag != 1)
		write(1, "rb\n", 3);
}

void	ra_rb(t_stack *st)
{
	rotate_a(st, 1);
	rotate_b(st, 1);
	write(1, "rr\n", 3);
}
