/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:20:41 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/27 14:34:18 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*se1;
	unsigned char	*se2;
	size_t	i;

	se1 = (unsigned char *)s1;
	se2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if(se1[i] != se2[i])
			return (se1[i] - se2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	s1[] = "hello";
	char	s2[] = "hello";
	char	s3[] = "honey";

	printf("%d\n", memcmp(s1, s2, 5 * sizeof(char)));
	printf("%d\n", memcmp(s2, s3, 5 * sizeof(char)));
}
