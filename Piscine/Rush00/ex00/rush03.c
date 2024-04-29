/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarrar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:49:11 by iarrar            #+#    #+#             */
/*   Updated: 2022/11/06 23:17:05 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	ft_prem_ligne(int x, int ligne, int colonne);

void	ft_inter_ligne(int x, int ligne, int colonne);

void	rush(int x, int y)
{
	int	ligne;
	int	colonne;

	ligne = 1;
	while (ligne <= y)
	{
		colonne = 1;
		while (colonne <= x)
		{
			if (ligne == 1 || ligne == y)
				ft_prem_ligne(x, ligne, colonne);
			else
				ft_inter_ligne(x, ligne, colonne);
			colonne++;
		}
		if (x > 0)
			ft_putchar('\n');
		ligne++;
	}
}

void	ft_prem_ligne(int x, int ligne, int colonne)
{
	if (colonne == 1)
		ft_putchar('A');
	else if (colonne == x)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	ft_inter_ligne(int x, int ligne, int colonne)
{
	if (colonne == 1 || colonne == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}
