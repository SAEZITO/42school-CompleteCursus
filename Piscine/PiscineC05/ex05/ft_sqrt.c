/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:11:17 by alsaez            #+#    #+#             */
/*   Updated: 2022/11/13 22:45:56 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb == 2147483647)
		return (0);
	i = 0;
	while (i * i <= nb)
	{
		if (i > 46340)
			return (0);
		if (i * i == nb)
			return (i);
		else
			i++;
	}	
	return (0);
}
