/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:05:45 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/25 14:13:18 by hyungyki         ###   ########.fr       */
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
	{
		while (i < n)
		{
				change[i] = str[i];
				i++;
		}
	else
	{
		while (n--)
			*(change + n) = *(str + n);
	}
	return (change);
}
