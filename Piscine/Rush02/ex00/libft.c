/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:33:10 by rstride           #+#    #+#             */
/*   Updated: 2022/11/20 14:22:51 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == 0)
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0' && (str[i + j + 1] < '0'
					|| str[i + j + 1] > '9'))
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_show_file(void)
{
	int		file2;
	char	output[500];
	int		i;

	i = 0;
	file2 = open("output.42", O_RDONLY);
	while ((read(file2, &output[i], 1)))
		i++;
	output[i] = 0;
	close(file2);
	i = 0;
	if (output[i] == '\7')
	{
		write(1, "Error, bad dictionnary.\n", 24);
		return ;
	}
	while (output[i])
	{
		write(1, &output[i], 1);
		if (output[i + 2] == 0)
			break ;
		i++;
	}
}

void	ft_prints(char *str)
{
	int	i;
	int	file2;

	file2 = open("output.42", O_WRONLY | O_APPEND);
	i = 0;
	while (str[i] != '\n' && str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			while (str[i] == ' ' || str[i] == '\t')
				i++;
			write(file2, " ", 1);
		}
		write(file2, &str[i], 1);
		i++;
	}
	write(file2, " ", 1);
	close(file2);
}

void	ft_start_program(char *num, char *dico)
{
	while (*num == '0' && ft_strlen(num) > 1)
		num++;
	ft_solve(num, dico);
	free(dico);
	free(num);
	ft_show_file();
}
