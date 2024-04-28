/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:10:47 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/28 15:20:02 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
//#include <libft.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0') && i < n)
		i++;
	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] > s2[i])
		return (s1[i] - s2[i]);
	else
		return (s1[i] - s2[i]);
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
