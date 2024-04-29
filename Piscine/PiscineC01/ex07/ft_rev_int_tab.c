/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:30:25 by alsaez            #+#    #+#             */
/*   Updated: 2022/11/07 12:45:14 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	diff;

	i = 0;
	while (i < size / 2)
	{
		diff = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = diff;
		i++;
	}
}
