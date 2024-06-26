/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 21:31:22 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/29 21:31:34 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	free_str(char **splitstr)
{
	int	i;

	i = 0;
	while (!splitstr[i])
		free(splitstr[i++]);
	free(splitstr);
}

static int	word_count(char const *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str == c)
			str++;
		else
		{
			count++;
			while (*str != c && *str)
				str++;
		}
	}
	return (count);
}

static int	plus_word(char const *str, char c, char **splitstr, int i)
{
	int	len;

	while (*str)
	{
		if (*str == c)
			str++;
		else
		{
			len = 0;
			while (*str != c && *str)
			{
				str++;
				len++;
			}
			splitstr[i] = (char *)malloc((len + 1) * sizeof(char));
			if (!splitstr[i])
			{
				free_str(splitstr);
				return (-1);
			}
			ft_strlcpy((char *)splitstr[i++], (char *)str - len, len + 1);
		}
	}
	splitstr[i] = 0;
	return (1);
}

char	**ft_split(char const *str, char c)
{
	char	**splitstr;

	splitstr = (char **)malloc((word_count(str, c) + 1) * sizeof(char *));
	if (!splitstr)
		return (NULL);
	if ((plus_word(str, c, splitstr, 0)) == -1)
		return (NULL);
	return (splitstr);
}
