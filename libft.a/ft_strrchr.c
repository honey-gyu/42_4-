/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 03:09:05 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/29 09:59:22 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;
	int				i;

	str = (unsigned char *)s;
	i = ft_strlen(s);
	while (i != 0)
	{
		if (str[i] == c)
			return ((char *)str + i);
		i--;
	}
	return (0);
}
/*
int	main(void)
{
	char s[] = "hello world";
	char c = 'e';
	char a = 'a';

	printf("%s\n", ft_strrchr(s, c));
	printf("%s", ft_strrchr(s, a));
}*/
