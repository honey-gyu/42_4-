/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 21:37:05 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/29 21:37:12 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t size)
{
	size_t	count;
	size_t	little_len;

	count = 0;
	little_len = ft_strlen(little);
	if (!little_len)
		return ((char *)big);
	while (*big && size-- > 0)
	{
		if (*big == little[count])
			count++;
		else
		{
			big -= count;
			count = 0;
		}
		if (count == little_len)
			return ((char *)big - count + 1);
		big++;
	}
	return (NULL);
}
