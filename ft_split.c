/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 19:48:06 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/29 17:55:41 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_sep(char s, char seper)
{
	return (s == seper);
}

static size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && ft_sep(s[i], c))
			i++;
		if (s[i] != '\0' && !ft_sep(s[i], c))
		{
			i++;
			count++;
		}
		while (s[i] != '\0' && ft_sep(s[i], c))
			i++;
	}
	return (count);
}

static char	*ft_dup(char *s, char c)
{
	char	*dest;
	int		i;
	int		len;

	len = 0;
	while (s[len] != '\0' && !ft_sep(s[len], c))
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static	void	ft_free(char **s, int i)
{
	while (i-- > 0)
	{
		free(s[i]);
		s[i] = NULL;
	}
	free(s);
	s = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		i;
	int		len;

	dest = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && ft_sep(s[i], c))
			i++;
		if (s[i] != '\0' && !ft_sep(s[i], c))
			dest[len++] = ft_dup((char *)(s + i), c);
		else
		{
			ft_free(dest, i);
			return (0);
		}
		while (s[i] != '\0' && !ft_sep(s[i], c))
			i++;
	}
	dest[len] = 0;
	return (dest);
}
/*
int     main(void)
{
        char    **dest;
        char    s[] = "h?e?l";
	char	c = '?';
        int     i = 0;

        dest = ft_split(s, c);
        while (dest[i])
                printf("%s\n", dest[i++]);
	return (0);
}*/
