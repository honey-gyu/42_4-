/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 19:48:06 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/28 20:12:47 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_sep(char s, char seper)
{
	int	i;

	i = 0;
	while (seper)
	{
		if (s == seper)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && ft_sep(s[i], c))
			i++;
		if (s[i] && !ft_sep(s[i], c))
		{
			i++;
			count++;
		}
		while (s[i] && ft_sep(s[i], c))
			i++;
	}
	return (count);
}

char	*ft_dup(char *s, char c)
{
	char	*dest;
	int	i;
	int	len;

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

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int	i;
	int	len;

	if (!s)
		return (NULL);
	dest = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	len = 0;
	while (s[i])
	{
		while (s[i] && ft_sep(s[i], c))
			i++;
		if (s[i] && !ft_sep(s[i], c))
			dest[len++] = ft_dup((char *)(s + i), c);
		while (s[i] && !ft_sep(s[i], c))
			i++;
	}
	dest[len] = 0;
	return (dest);
}

int     main(void)
{
        char    **dest;
        char    s[] = "hello?world?honey";
	char	c = '?';
        int     i = 0;

        dest = ft_split(s, c);
        while (dest[i])
                printf("%s\n", dest[i++]);
	return (0);
}
