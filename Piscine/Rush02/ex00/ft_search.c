/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 01:35:42 by rstride           #+#    #+#             */
/*   Updated: 2022/11/16 12:36:38 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_handleten(char *num, char *line)
{
	if (num[0] == '1')
	{
		if (ft_check_except(line, num))
			return (1);
	}
	else if (ft_check_ten(line, num) != 0)
		return (1);
	return (0);
}

int	ft_insidesearch(char *num, int len, char *line)
{
	if (len == 1)
	{
		if (ft_check_unit(line, num) != 0)
			return (1);
	}
	else if (len == 2)
	{
		if (num[0] == '1')
		{
			if (ft_check_except(line, num))
				return (1);
		}
		else if (ft_check_ten(line, num) != 0)
			return (1);
	}
	else if (len == 3)
		if (ft_check_hundred(line))
			return (1);
	return (0);
}

void	ft_set_error(void)
{
	int	file;

	file = open("output.42", O_WRONLY | O_TRUNC);
	if (file < 0)
		return ;
	write(file, "\7", 1);
}

int	ft_search(char *num, int len, char *dico)
{
	char	line[200];
	int		i;
	int		j;

	j = 0;
	while (dico[j] != 0)
	{
		i = 0;
		while (dico[j] != '\n')
			line[i++] = dico[j++];
		line[i] = '\0';
		if (ft_insidesearch(num, len, line))
			return (1);
		j++;
	}
	ft_set_error();
	return (0);
}
