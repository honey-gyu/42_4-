/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:51:36 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/23 19:03:59 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	change;
	size_t			i;

	str = (unsigned char *)s;
	change = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == change)
			return ((char *)str + i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s[] = "hello";
	char	c = 'l';
	char	a = 'a';

	printf("%s\n", (char *)ft_memchr(s, c, 5 * sizeof(char)));
	printf("%s\n", (char *)ft_memchr(s, a, 5 * sizeof(char)));
	printf("%s\n", (char *)ft_memchr(s, c, 2 * sizeof(char)));
}*/
