/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 13:54:02 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/27 14:00:23 by hyungyki         ###   ########.fr       */
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
		str[i++] = change;
	return (str);
}

int	main(void)
{
	char	s[] = "hello world";
	int	c = 'a';

	printf("%s\n", (char *)memset(s, c, 5 * sizeof(char)));
}
