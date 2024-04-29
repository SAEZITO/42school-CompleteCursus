/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:54:17 by alsaez            #+#    #+#             */
/*   Updated: 2022/11/13 21:20:02 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <headrush.h>

int	ft_check_row(char **tab, int size)
{
	int	x;
	int	y;
	int	checkrow;

	x = 0;
	checkrow = 0 ;
	while (x < size)
	{
		y = 0;
		while (y < size)
		{
			checkrow += (tab[x][y] - 48);
			y++;
		}
		if (checkrow != 10)
			return (0);
		else
			checkrow = 0;
		x++;
	}
	return (1);
}
