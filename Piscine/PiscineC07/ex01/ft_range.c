/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:32:14 by alsaez            #+#    #+#             */
/*   Updated: 2022/11/17 11:37:46 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	if (min >= max)
		return (0);
	else
	{
		size = max - min;
		if (size < 0)
			size = -size;
		tab = malloc((size + 1) * 4);
		i = 0;
		while (i < size)
		{
			tab[i] = min + i;
			i++;
		}
		tab[i] = '\0';
		return (tab);
	}
}
