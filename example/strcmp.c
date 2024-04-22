/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:34:26 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/29 14:04:25 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] < s2[i])
		return (s1[i] - s2[i]);
	else
		return (s1[i] - s2[i]);
}

int	main(void)
{
	char	s1[] = "hello";
	char	s2[] = "hello";
	char	s3[] = "honey";

	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s2, s3));
}
