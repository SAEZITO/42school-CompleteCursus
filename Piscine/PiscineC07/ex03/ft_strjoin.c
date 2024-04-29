/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:18:14 by alsaez            #+#    #+#             */
/*   Updated: 2022/11/21 13:56:14 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dlen;

	i = 0;
	dlen = ft_strlen(dest);
	while (src[i] != 0)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = 0;
	return (dest);
}

int	ft_strlentotal(int size, char **strs, char *sep)
{
	int	totalen;
	int	i;

	i = 0;
	totalen = 0;
	while (i < size)
	{
		totalen += ft_strlen(strs[i++]);
	}
	totalen += (ft_strlen(sep) * (size - 1)) + 1;
	return (totalen);
}

char	*ft_fillres(int size, char **strs, char *sep, char *res)
{
	int	i;

	i = 0;
	while (i < size)
	{
		res = ft_strcat(res, strs[i++]);
		if (i < size)
			res = ft_strcat(res, sep);
	}
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		reslen;
	int		i;
	char	*res;

	i = 0;
	reslen = 0;
	if (size <= 0)
	{
		res = (char *)malloc(1);
		res[i] = '\0';
		return (res);
	}
	reslen = ft_strlentotal(size, strs, sep);
	res = (char *)malloc(reslen);
	if (!res)
		return ("");
	res[i] = '\0';
	res = ft_fillres(size, strs, sep, res);
	return (res);
}
