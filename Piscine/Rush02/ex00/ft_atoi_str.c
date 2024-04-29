/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 22:59:15 by rstride           #+#    #+#             */
/*   Updated: 2022/11/20 23:02:04 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_isnumber(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

int	ft_isspace(char c)
{
	if (c != ' ')
		return (0);
	return (1);
}

int	ft_ispoint(char c)
{
	if (c != '.')
		return (0);
	return (1);
}

char	*ft_atoi_str(char *str)
{
	int		i;
	int		j;
	char	*str2;

	i = 0;
	j = 0;
	str2 = malloc(39);
	while (ft_isspace(str[i]))
		i++;
	if (!ft_isnumber(str[i]))
		return ("\7");
	while (ft_isnumber(str[i]))
	{
		str2[j] = str[i];
		i++;
		j++;
	}
	if (ft_ispoint(str[i]))
		return ("\7");
	return (str2);
}
