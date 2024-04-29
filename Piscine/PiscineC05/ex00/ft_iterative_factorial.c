/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:06:39 by alsaez            #+#    #+#             */
/*   Updated: 2022/11/10 10:22:56 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	i = nb;
	res = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i > 0)
	{
		res *= i;
		i--;
	}
	return (res);
}
