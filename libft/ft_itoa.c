/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:26:24 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/26 20:40:13 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int n)
{
	char	*dest;
	size_t	len;
	size_t	i;

	len = ft_len(n);
	i = n;
	if (!(dest = (char *)malloc(sizeof(char) * (len + 1)))
		return (NULL);
	if (n < 0)
	{
		dest[0] = '-';
		n = -n;
	}
	if (n == 0)
		dest[0] = '0';
	dest[len--] = '\0';
	while (n)
	{
		dest[len] = n % 10 + '0';
		len--;
		n = n / 10;
	}
	return (dest);
}
