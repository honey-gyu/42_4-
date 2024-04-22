/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 21:27:26 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/29 02:19:50 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
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
	if (size <= i)
		len += size;
	else
		len += i;
	while (src[j] != '\0' && i + 1 < size)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (len);
}
/*
int	main(void)
{
	char	dst[11] = "helloworld";
	char	src[5] = "honey";
	printf("%ld\n", ft_strlcat(dst, src, 5));
	printf("%s\n", dst);

	char	dest[9] = "honeygyu";
	char	str[8] = "ggyugle";
	printf("%ld\n", ft_strlcat(dest, str, 13));
	printf("%s\n", dest);
}*/
