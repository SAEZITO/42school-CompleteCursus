/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:02:02 by rstride           #+#    #+#             */
/*   Updated: 2022/11/20 14:17:05 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_check_unit(char *str, char *to_search)
{
	int		i;

	i = 0;
	while (str[i] != ':')
	{
		if (str[i] == '\n')
		{
			return (0);
		}
		if (str[i] == to_search[0] && (str[i + 1] == ' '
				|| str[i + 1] == ':' || str[i + 1] == '\t') && (i == 0))
		{
			while (str[i] != ':')
				i++;
			i++;
			while (str[i] == ' ' || str[i] == '\t')
				i++;
			ft_prints(&str[i]);
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_check_except(char *str, char to_search[2])
{
	int		i;

	i = 0;
	while (str[i] != ':')
	{
		if (str[i] == '\n' || str[i] == 0)
		{
			return (0);
		}
		if (str[i] == to_search[0] && str[i + 1] == to_search[1]
			&& (str[i + 2] < '0' || str[i + 2] > '9'))
		{
			while (str[i] != ':' && str[i])
				i++;
			i++;
			while (str[i] == ' ' && str[i])
				i++;
			ft_prints(&str[i]);
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_check_ten(char *str, char to_search[2])
{
	int		i;

	i = 0;
	while (str[i] != ':')
	{
		if (str[i] == '\n' || str[i] == 0)
		{
			return (0);
		}
		if (str[i] == to_search[0] && str[i + 1] == '0'
			&& (str[i + 2] < '0' || str[i + 2] > '9'))
		{
			while (str[i] != ':' && str[i])
				i++;
			i++;
			while (str[i] == ' ' && str[i])
				i++;
			ft_prints(&str[i]);
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_check_hundred(char *str)
{
	int			i;

	i = 0;
	while (str[i] != ':')
	{
		if (str[i] == '\n' || str[i] == 0)
		{
			return (0);
		}
		if (str[i] == '1' && str[i + 1] == '0' && str[i + 2] == '0'
			&& (str[i + 3] < '0' || str[i + 3] > '9'))
		{
			while (str[i] != ':' && str[i])
				i++;
			i++;
			while (str[i] == ' ' && str[i])
				i++;
			ft_prints(&str[i]);
			return (1);
		}
		i++;
	}
	return (0);
}
