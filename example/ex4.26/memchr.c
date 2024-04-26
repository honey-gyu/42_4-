/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:12:49 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/26 15:19:00 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	size_t	i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return ((char *)str + i);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	s[] = "hello";

	printf("%s\n", (char *)memchr(s, 'l', 5 * sizeof(char)));
}
