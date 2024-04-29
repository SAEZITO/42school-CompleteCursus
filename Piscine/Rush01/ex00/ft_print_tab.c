/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:50:38 by alsaez            #+#    #+#             */
/*   Updated: 2022/11/12 14:21:05 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headrush.h"

void	ft_print_tab(char **tab, int size)
{
	int	x;
	int	y;

	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			ft_putchar(tab[y][x] + '0');
			if (++x < size)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		y++;
	}
}
