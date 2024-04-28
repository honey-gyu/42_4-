/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 15:44:38 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/28 19:16:04 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
//#include <libft.h>

int	is_seper(char c, char *seper)
{
	int	i;

	i = 0;
	while (seper[i])
	{
		if (c == seper[i])
			return (1);
		i++;
	}
	return (0);
}

int	word_count(char *str, char *seper)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (is_seper(str[i], seper) && str[i] != '\0')
			i++;
		if (!is_seper(str[i], seper) && str[i] != '\0')
		{
			i++;
			count++;
		}
		while (!is_seper(str[i], seper) && str[i] != '\0')
			i++;
	}
	return (count);
}

char	*ft_word_dup(char *src, char *seper)
{
	int		i;
	int		w_len;
	char	*strcpy;

	w_len = 0;
	while (!is_seper(src[w_len], seper) && src[w_len] != '\0')
		w_len++;
	strcpy = (char *)malloc(sizeof(char) * (w_len + 1));
	if (strcpy != 0)
	{
		i = 0;
		while (i < w_len)
		{
			strcpy[i] = *src;
			src++;
			i++;
		}
		strcpy[i] = '\0';
	}
	return (strcpy);
}

char	**ft_split(char *str, char *charset)
{
	int		count;
	int		i;
	char	**arr_f;

	count = word_count(str, charset);
	arr_f = (char **)malloc(sizeof(char *) * (count + 1));
	arr_f[count] = (void *)0;
	i = -1;
	while (*str)
	{
		count = 0;
		while (is_seper(*str, charset) && *str)
			str++;
		if (!is_seper(*str, charset) && *str)
			arr_f[++i] = ft_word_dup(str, charset);
		while (!is_seper(*str, charset) && *str)
			str++;
	}
	return (arr_f);
}

int	main(void)
{
	char	**array;
	char	str[] ="hello?world?honey";
	char	c[] = "?";
	int	i = 0;

	array = ft_split(str, c);
	while(array[i])
		printf("%s\n", array[i++]);
}
