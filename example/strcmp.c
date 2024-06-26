/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:55:55 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/23 13:59:51 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] > s2[i])
		return (s1[i] - s2[i]);
	else
		return (s1[i] - s2[i]);
}

int	main(void)
{
	char	s1[] = "hello";
	char	s2[] = "hello";
	char	s3[] = "honey";

	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", strcmp(s2, s3));
}
