/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:33:00 by alsaez            #+#    #+#             */
/*   Updated: 2022/11/24 16:03:43 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "ft.h"

void	ft_operator(char c, int a, int b)
{
	int	res;
	int	(*op[5])(int, int);

	op[0] = &ft_add;
	op[1] = &ft_sub;
	op[2] = &ft_mod;
	op[3] = &ft_div;
	op[4] = &ft_mul;
	res = 0;
	if (c == '+')
		res = op[0](a, b);
	if (c == '-')
		res = op[1](a, b);
	if (c == '%')
		res = op[2](a, b);
	if (c == '/')
		res = op[3](a, b);
	if (c == '*')
		res = op[4](a, b);
	ft_putnbr(res);
	ft_putchar('\n');
	return ;
}

int	main(int argc, char **argv)
{
	int	nb1;
	int	nb2;

	if (argc != 4)
		return (0);
	nb1 = ft_atoi(argv[1]);
	nb2 = ft_atoi(argv[3]);
	if (argv[2][1] != '\0')
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (nb2 == 0 && argv[2][0] == '/')
	{
		ft_putstr("Stop : division by zero");
		return (0);
	}
	if (nb2 == 0 && argv[2][0] == '%')
	{
		ft_putstr("Stop : modulo by zero");
		return (0);
	}
	ft_operator(argv[2][0], nb1, nb2);
	return (0);
}
