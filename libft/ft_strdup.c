/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:48:24 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/28 15:19:40 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
//#include <libft.h>

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;
	int		len;

	len = 0;
	while (s[len] != '\0')
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	s[] = "hello";

	printf("%p\n", s);
	printf("%p\n", ft_strdup(s));
	printf("%s\n", s);
	printf("%s\n", ft_strdup(s));
}*/
