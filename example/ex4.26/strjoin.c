/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:08:24 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/26 16:21:58 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int	i;
	int	len_s1;
	int	len_s2;

	if (s1 && s2)
	{
		len_s1 = ft_strlen(s1);
		len_s2 = ft_strlen(s2);
		dest = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
		if (dest == 0)
			return (0);
		i = -1;
		while (s1[++i] != '\0')
			dest[i] = s1[i];
		i = 0;
		while (s2[i] != '\0')
			dest[len_s1++] = s2[i++];
		dest[len_s1] = '\0';
		return (dest);
	}
	return (0);
}

int	main(void)
{
	char	s1[] = "hello";
	char	s2[] = "world";

	printf("%s\n", strjoin(s1, s2));
}
