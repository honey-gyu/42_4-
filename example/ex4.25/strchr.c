/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:22:38 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/25 13:28:19 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*strchr(const char *s, int c)
{
	unsigned char	*str;
	int	i;

	str = (unsigned char *)s;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return ((char *)str + i);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	s[] = "hello";
	char	c = 'o';

	printf("%s\n", strchr(s, c));
}
