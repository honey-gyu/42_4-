/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 19:45:13 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/29 02:19:15 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[i] != '\0' && i + 1 < size)
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	while (src[len])
		len++;
	return (len);
}
/*
int	main(void)
{
	char dest[10] = "hellohi";
	char src[10] = "world";
	printf("%ld\n", ft_strlcpy(dest, src, 3));
	printf("%s\n", dest);
	printf("%ld\n", ft_strlcpy(dest, src, 8));
	printf("%s\n", dest);
	printf("%ld\n", ft_strlcpy(dest, src, 0));
}*/
