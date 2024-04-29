/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:35:47 by alsaez            #+#    #+#             */
/*   Updated: 2022/11/13 23:06:10 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <headrush.h>

char	ft_recup_params(char **tab, int i)
{
	int	j;
	char	arg[4];

	j = 0;
	while (j < 4)
	{
		arg[j] = tab[i];
		j++;
		i++;
	}
	return (arg);
}

int	*ft_insert_tab(char *colup, char *coldown, char *rowright, char *rowleft)
{
	int	tab[4][4];
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if ((j == 0 && colup[j] == 49) || (j == 3 && coldown[j] == 49))
				tab[i][j] = 4;
			if ((j == 0 && colup[j] == 52) || (j == 3 && coldown[j] == 52))
				tab[i][j] = 1;
			j++;
		}
		if ((i == 0 && rowleft[i] == 49) || (i == 3 && rowright[i] == 49))
				tab[i][j] = 4;
		if ((i == 0 && rowleft[i] == 52) || (i == 3 && rowright[i] == 52))
				tab[i][j] = 1;
		i++;
	}
	return (tab);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char		colup[4];
	char		coldown[4];
	char		rowright[4];
	char		rowleft[4];

	if (argc != 17)
	{
		write(1, "ERROR\n", 6);
		return (0);
	}
	i = 1;
	while (i < 18)
	{
		if (i < 6)
			colup = ft_recup_params(argv, i);
		if (i > 5 && i < 10)
			coldown = ft_recup_params(argv, i);
		if (i > 9 && i < 14)
			rowright = ft_recup_params(argv, i);
		if (i > 13 && i < 18)
			rowleft = ft_recup_params(argv, i);
	}
}
