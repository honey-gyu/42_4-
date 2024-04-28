/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 19:16:34 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/28 19:47:43 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
//#include <libft.h>

int	ft_seper(char c, char seper)
{
	int	i;

	i = 0;
	while (seper)
	{
		if (c == seper)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (ft_seper(s[i], c) && s[i] != '\0')
			i++;
		if (!ft_seper(s[i], c) && s[i] != '\0')
		{
			i++;
			count++;
		}
		while (!ft_seper(s[i], c) && s[i] != '\0')
			i++;
	}
	return (count);
}

char	*ft_dup(char *s, char seper)
{
	char	*src;
	int	i;
	int	len;

	len = 0;
	while (!ft_seper(s[len], seper) && s[len] != '\0')
		len++;
	src = (char *)malloc(sizeof(char) * (len + 1));
	if (src != 0)
	{
		i = 0;
		while (i < len)
		{
			src[i] = *s;
			s++;
			i++;
		}
		src[i] = '\0';
	}
	return (src);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int	i;
	int	count;

	count = ft_count(*s, c);
	if (!s)
		return (NULL);
	dest = (char **)malloc(sizeof(char *) * (count + 1));
	if (!dest)
		return (NULL);
	dest[count] = (void *)0;
	i = 0;
	while (*s)
	{
		count = 0;
		while (ft_seper(*s, c) && *s)
			s++;
		if (!ft_seper(*s, c) && *s)
			dest[i++] = ft_dup(s, c);
		while (!ft_seper(*s, c) && *s)
			s++;
	}
	return (dest);
}

int	mai(void)
{
	char	**dest;
	char	s[] = "hello?world?honey";
	char	c[] = "?";
	int	i = 0;

	dest = ft_split(s, c);
	while (dest[i])
		printf("%s\n", dest[i++]);
}
