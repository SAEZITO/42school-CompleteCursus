/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:34:13 by alsaez            #+#    #+#             */
/*   Updated: 2022/11/22 18:46:52 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_char_is_sep(char c, char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (c == s1[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (ft_char_is_sep(str[i], sep))
			i++;
		if (str[i] && !ft_char_is_sep(str[i], sep))
		{
			count++;
			while (str[i] && !ft_char_is_sep(str[i], sep))
				i++;
		}
	}
	return (count);
}

char	*ft_write_tab(int *index, char *str, char *sep)
{
	char	*word;
	int		i;
	int		wordlen;

	wordlen = 0;
	i = 0;
	while (ft_char_is_sep(str[*index], sep))
		(*index)++;
	while (!ft_char_is_sep(str[*index + wordlen], sep) && str[*index + wordlen])
		wordlen++;
	word = malloc(wordlen + 1);
	if (!word)
		return (NULL);
	while (i < wordlen)
	{
		word[i++] = str[*index];
		(*index)++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		words;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!str || !charset)
		return (NULL);
	words = ft_count_words(str, charset);
	res = malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	while (i < words)
		res[i++] = ft_write_tab(&j, str, charset);
	res[i] = 0;
	return (res);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		index;
	char	**split;
	(void)	argc;
	split = ft_split(argv[1], argv[2]);
	if (!split)
		return (0);
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}*/
