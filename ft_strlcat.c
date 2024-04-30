/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:20:47 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/29 21:08:40 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (src_len + size);
	while (src[i] != '\0' && dst_len + i + 1 < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}
/*
int	main(void)
{
	char	dst[11] = "helloworld";
	char	src[6] = "honey";
	printf("%ld\n", ft_strlcat(dst, src, 5));
	printf("%s\n", dst);

	char	dest[9] = "honeygyu";
	char	str[8] = "ggyugle";
	printf("%ld\n", ft_strlcat(dest, str, 13));
	printf("%s\n", dest);
}*/
