/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:10:47 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/29 15:09:28 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*se1;
	unsigned char	*se2;
	size_t			i;

	se1 = (unsigned char *)s1;
	se2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (se1[i] == se2[i] && i + 1 < n && (se1[i] != '\0' && se2[i] != '\0'))
		i++;
	if (se1[i] == se2[i])
		return (0);
	else if (se1[i] < se2[i])
		return (se1[i] - se2[i]);
	else
		return (se1[i] - se2[i]);
}
/*
int	main(void)
{
	char	s1[] = "hello";
	char	s2[] = "hello";
	char	s3[] = "helloworld";

	printf("%d\n", ft_strncmp(s1, s2, 7));
	printf("%d\n", ft_strncmp(s1, s2, 0));
	printf("%d\n", ft_strncmp(s2, s3, 5));
	printf("%d\n", ft_strncmp(s2, s3, 4));
}*/
