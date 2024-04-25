/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:45:43 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/25 14:49:02 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
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
