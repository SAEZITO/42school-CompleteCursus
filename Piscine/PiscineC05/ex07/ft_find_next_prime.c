/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:00:18 by alsaez            #+#    #+#             */
/*   Updated: 2022/11/14 13:31:23 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 2)
		return (2);
	if (nb > 2147483423 && nb <= 2147483647)
		return (2147483647);
	while (i < nb / 2)
	{
		if (nb % i == 0)
		{	
			nb++;
			i = 2;
		}
		i++;
	}
	return (nb);
}
