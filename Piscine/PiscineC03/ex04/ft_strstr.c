/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:45:49 by alsaez            #+#    #+#             */
/*   Updated: 2022/11/08 18:22:43 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	var;
	int	i;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			var = 0;
			i = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
				{
					var = 1;
				}
				i++;
			}
			if (var == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
