/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:33:10 by rstride           #+#    #+#             */
/*   Updated: 2022/11/20 14:18:56 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_cut_string(char *str)
{
	int	i;

	if (ft_strlen(str) < 4)
		return ("");
	i = ft_strlen(str) % 3;
	if (i == 0)
		i = 3;
	while (str[i] == '0' && str[i])
		i++;
	return (&str[i]);
}

void	ft_nul(char *num, char *dico)
{
	int		i;
	char	*to_find;
	int		num_zeroes;
	int		len;

	len = ft_strlen(num);
	if (len < 4)
		return ;
	if (len % 3 == 0)
		(len -= 3);
	else
		(len += 0);
	i = 2;
	num_zeroes = (len / 3) * 3;
	to_find = malloc(sizeof(char) * (num_zeroes + 3));
	to_find[0] = '\n';
	to_find[1] = '1';
	while (i < num_zeroes + 2)
		to_find[i++] = '0';
	to_find[i] = 0;
	dico = ft_strstr(dico, to_find);
	ft_nul2(dico, to_find);
}

void	ft_nul2(char *dico, char *to_find)
{
	while (*dico != ':')
		dico++;
	dico++;
	while (*dico == ' ')
		dico++;
	ft_prints(dico);
	free(to_find);
}

void	ft_solve(char *str, char *dico)
{
	int	i;

	if (*str == 0)
		return ;
	i = ft_strlen(str) % 3;
	if (i == 0)
		i = 3;
	if (i == 3)
		ft_third(str, dico);
	else if (i == 2)
		ft_second(str, dico);
	else if (i == 1)
		ft_first(str, dico);
	if (ft_strlen(str) < 4)
	{
		return ;
	}
	ft_nul(str, dico);
	str = ft_cut_string(str);
	ft_solve(str, dico);
}
