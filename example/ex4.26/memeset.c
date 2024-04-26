/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memeset.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:01:18 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/26 15:03:58 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	change;
	size_t	i;

	str = (unsigned char *)s;
	change = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		str[i] = change;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	s[] = "hello world";

	printf("%s\n", (char *)memset(s, 'a', 5 * sizeof(char)));
}
