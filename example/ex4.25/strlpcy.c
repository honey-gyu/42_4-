/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlpcy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:31:51 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/25 13:13:10 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

size_t	strlcpy(char *dst, const char *src, size_t size)
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

int	main(void)
{
	char	dst[] = "hello";
	char	src[] = "honey";

	printf("%ld\n", strlcpy(dst, src, 4));
	printf("%s\n", dst);
}
