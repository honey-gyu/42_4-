/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:16:52 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/29 13:14:06 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*se1;
	unsigned char	*se2;
	size_t			i;

	se1 = (unsigned char *)s1;
	se2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (se1[i] != se2[i])
			return (se1[i] - se2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "hello";
	char	s2[] = "hello";
	char	s3[] = "honey";

	printf("%d\n", ft_memcmp(s1, s2, 3 * sizeof(char)));
	printf("%d\n", ft_memcmp(s1, s3, 5 * sizeof(char)));
	printf("%d\n", ft_memcmp(s1, s2, 0 * sizeof(char)));
}*/
