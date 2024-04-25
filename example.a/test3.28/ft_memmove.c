/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:04:08 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/28 16:09:59 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*change;
	unsigned char	*str;
	size_t	i;

	change = (unsigned char *)dest;
	str = (unsigned char *)src;
	i = 0;
	if (change == NULL && str == NULL)
		return (NULL);
	if (change < str)
		while (i < n)
		{
			change[i] = str[i];
			i++;
		}
	else
		while (n--)
			*(change + n) = *(str + n);
	return (change);
}
