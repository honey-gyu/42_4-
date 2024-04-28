/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:48:59 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/28 16:59:51 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int	i;
	int	s1_len;
	int	s2_len;

	if (s1 && s2)
	{
		s1_len = ft_strlen(s1);
		s2_len = ft_strlen(s2);
		dest = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
		if (!dest)
			return (NULL);
		i = -1;
		while (s1[++i] != '\0')
			dest[i] = s1[i];
		i = 0;
		while (s2[i] != '\0')
			dest[s1_len++] = s2[i++];
		dest[s1_len] = '\0';
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
