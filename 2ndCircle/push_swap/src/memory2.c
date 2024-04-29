/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez   <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 08:41:28 by alsaez            #+#    #+#             */
/*   Updated: 2023/04/26 10:47:54 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_intmax(char *av)
{
	int	i;

	i = 1;
	while (av[i])
	{	
		if (ft_strlen(av) > 11)
			return (0);
		else if (ft_strlen(av) == 11)
		{
			if (ft_strncmp(av, "-2147483648", 11) > 0)
				return (0);
		}
		else if (ft_strlen(av) == 10
			&& ft_strncmp(av, "2147483647", 10) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	check_arg2(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{	
		if (!((str[i] >= '0' && str[i] <= '9') || (str[i] == '-' && i == 0)))
			return (0);
		i++;
	}
	return (1);
}

void	w_error(t_stack *st)
{
	write(1, "Error\n", 6);
	free(st->a);
	free(st->b);
	exit(EXIT_FAILURE);
}
