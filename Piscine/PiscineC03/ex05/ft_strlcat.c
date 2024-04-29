/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:03:56 by alsaez            #+#    #+#             */
/*   Updated: 2022/11/08 15:47:39 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	taille_dest;
	unsigned int	taille_src;

	taille_dest = ft_strlen(dest);
	taille_src = ft_strlen(src);
	i = taille_dest;
	j = 0;
	if (size < 1)
		return (taille_src);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < taille_dest)
		return (taille_src + size);
	else
		return (taille_dest + taille_src);
}
