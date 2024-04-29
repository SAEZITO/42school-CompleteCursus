/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:27:04 by alsaez            #+#    #+#             */
/*   Updated: 2022/11/23 17:30:11 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_add(int a, int b)
{
	int	res;

	res = 0;
	res = a + b;
	return (res);
}

int	ft_sub(int a, int b)
{
	int	res;

	res = 0;
	res = a - b;
	return (res);
}

int	ft_mod(int a, int b)
{
	int	res;

	res = 0;
	res = a % b;
	return (res);
}

int	ft_div(int a, int b)
{
	int	res;

	res = 0;
	res = a / b;
	return (res);
}

int	ft_mul(int a, int b)
{
	int	res;

	res = 0;
	res = a * b;
	return (res);
}
