/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 17:17:01 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/28 17:26:30 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_start(char const *s1, char const *set, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if(ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

int	ft_end(char const *s1, char const *set, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if(ft_strchr(set, s[len -i -1]) == 0)
			braek ;
		i++;
	}
	return (len - i);
}

char	*strtrim(char const *s1, char const *set)
{
	char	*dest;
	int	start;
	int	end;
	size_t	len;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(""));
	len = ft_strlen(s1);
	start = ft_start(s1, set, len);
	end = ft_end(s1, set, len);
	dest = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, (s1 + start), (end - start + 1));
	return (dest);
}
