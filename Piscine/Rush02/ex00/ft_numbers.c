/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:50:26 by alsaez            #+#    #+#             */
/*   Updated: 2022/11/19 23:38:23 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_third(char num[3], char *dico)
{
	if (num[0] == '0')
		return ;
	ft_first(&num[0], dico);
	ft_search("100", 3, dico);
	if (num[1] != '0')
		ft_second(&num[1], dico);
	else if (num[2] != '0')
		ft_first(&num[2], dico);
}

void	ft_second(char num[2], char *dico)
{
	if (num[0] != '0')
		ft_search(num, 2, dico);
	if (num[1] != '0' && num[0] != '1')
	{
		ft_first(&num[1], dico);
	}
}

void	ft_first(char *num, char *dico)
{
	ft_search(num, 1, dico);
}
