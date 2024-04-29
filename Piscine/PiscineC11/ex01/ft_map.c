/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:45:42 by alsaez            #+#    #+#             */
/*   Updated: 2022/11/22 18:38:04 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*res;

	i = 0;
	res = (int *)malloc((length + 1) * sizeof(int));
	if (!res || length < 1)
		return (0);
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
#include <stdio.h>

int ft_mul(int a)
{
	return (a * 2);
}

int main (void)
{
	int	i;
	int *tab;
	int length;
	int *res;

	length = 10;
	tab = malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		tab[i] = i;
		i++;
	}
	res = ft_map(tab, length, &ft_mul);
	i = 0;
	while ( i < length)
	{
		printf( "%i", res[i]);
		i++;
	}
}*/
