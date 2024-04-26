/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:19:14 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/26 15:23:06 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*se1;
	unsigned char	*se2;
	size_t	i;

	i = 0;
	se1 = (unsigned char)s1;
	se2 = (unsigned char)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (se1[i] != se[i])
			return (se1[i] - se2[i]);
		i++;
	}
	return (0);
}
