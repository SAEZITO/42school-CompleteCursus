/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srtlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:19:20 by alsaez            #+#    #+#             */
/*   Updated: 2022/11/21 14:19:34 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_srtlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	taille_src;

	i = 0;
	if (size == 0)
		return (0);
	else
	{
		while (src[i])
			i++;
		taille_src = i;
		i = 0;
	}
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i])
	{
		dest[i] = '\0';
	}
	return (taille_src);
}
