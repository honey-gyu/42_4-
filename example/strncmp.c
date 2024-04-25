/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:00:41 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/23 14:04:02 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] > s2[i])
		return (1);
	else
		return (-1);
}

int	main(void)
{
	char	s1[] = "hello";
	char	s2[] = "hello";
	char	s3[] = "honey";

	printf("%d\n", strncmp(s1, s2, 4));
	printf("%d\n", strncmp(s2, s3, 1));
	printf("%d\n", strncmp(s1, s2, 0));
}
