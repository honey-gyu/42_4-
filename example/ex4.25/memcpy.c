/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:53:04 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/25 14:05:16 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*change;
	unsigned char	*str;
	size_t	i;

	change = (unsigned char *)dest;
	str = (unsigned char *)src;
	i = 0;
	if (change == NULL && str == NULL)
		return (NULL);
	while (i < n)
	{
		change[i] = str[i];
		i++;
	}
	return (change);
}

int	main(void)
{
	char	dest[] = "hello";
	char 	*str = dest + 1;

	printf("%s\n", (char *)ft_memcpy(dest, str, 5 * sizeof(char)));
}
