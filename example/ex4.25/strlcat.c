/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:13:19 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/25 13:22:27 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = 0;
	while (dst[i] != '\0')
		i++;
	while (src[len] != '\0')
		len++;
	if (size >= i)
		len += i;
	else
		len += size;
	while (src[j] != '\0' && i + 1 < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len);
}

int	main(void)
{
	char	dst[] = "hello";
	char	src[] = "world";

	printf("%ld\n", strlcat(dst, src, 10));
	printf("%s\n", dst);
}
