/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:09:09 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/22 17:21:02 by hyungyki         ###   ########.fr       */
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
	char	dst[] = "hello world";
	char	src[] = "honeygyu";

	printf("%ld\n", ft_strlcpy(dst, src, 3));
	printf("%s\n", dst);
	printf("%ld\n", ft_strlcpy(dst, src, 8));
	printf("%s\n", dst);
	printf("%ld\n", ft_strlcpy(dst, src, 0));
}*/
