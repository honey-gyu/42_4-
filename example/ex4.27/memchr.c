/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:16:17 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/27 14:20:31 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	change;
	size_t	i;

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

int	main(void)
{
	char	s[] = "hello";
	char	a = 'l';

	printf("%s\n", (char *)memchr(s, a, 5 * sizeof(char)));
}
