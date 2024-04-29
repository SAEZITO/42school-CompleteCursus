/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:44:57 by alsaez            #+#    #+#             */
/*   Updated: 2022/11/10 11:16:11 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{	
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (power < 0)
		return (0);
	while (i <= power)
	{
		res *= nb;
		i++;
	}
	return (res);
}
