/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:45:03 by rstride           #+#    #+#             */
/*   Updated: 2022/11/20 23:35:26 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_open_dico(char *filename)
{
	int		i;
	int		file;
	char	c;
	char	*dico;

	i = 0;
	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);
	while (read(file, &c, 1))
		i++;
	dico = (char *)malloc(sizeof(char) * (i + 3));
	if (!dico)
		return (0);
	i = 1;
	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);
	dico[0] = '\n';
	while (read(file, &c, 1))
		dico[i++] = c;
	dico[i + 1] = '\n';
	dico[i + 2] = '\0';
	close(file);
	return (dico);
}

int	ft_error(int i)
{
	if (i == 0)
		write(2, "Error, bad arguments.\n", 22);
	if (i == 1)
		write(2, "Error, bad number.\n", 19);
	if (i == 2)
		write(2, "Error, bad dictionnary.\n", 24);
	return (0);
}

int	ft_checkinput(char *num)
{
	int	i;

	i = 0;
	while (num[i])
	{
		if (num[i] < '0' || num[i] > '9' || i > 38)
			return (0);
		i++;
	}
	return (1);
}

int	ft_clear_file(void)
{
	int	file;

	file = open("output.42", O_WRONLY | O_TRUNC);
	if (file < 0)
		return (0);
	write(1, "", 1);
	close(file);
	return (1);
}

int	main(int argc, char **argv)
{
	char	*dico;
	char	*num;
	char	*filename;

	filename = "numbers.dict";
	if (argc == 2)
		num = argv[1];
	else if (argc == 3)
	{
		filename = argv[1];
		num = argv[2];
	}
	else
		return (ft_error(0));
	num = ft_atoi_str(num);
	if (num[0] == '\7')
		return (ft_error(1));
	dico = ft_open_dico(filename);
	if (dico == 0 || (ft_checkinput(num) == 0
			|| ft_clear_file() == 0))
		return (ft_error(2));
	ft_start_program(num, dico);
}
