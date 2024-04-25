/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:52:30 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/23 13:05:36 by hyungyki         ###   ########.fr       */
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
	if (0 < size)
		dst[i] = '\0';
	while (src[len])
		len++;
	return (len);
}

int	main(void)
{
	char	dest[] = "helloworld";
	char	src[] = "honeygyu";

	printf("%ld\n", ft_strlcpy(dest, src, 6));
	printf("%s\n", dest);
}
