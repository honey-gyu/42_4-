/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:06:01 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/23 15:23:53 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
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
	char	c = 'l';
	char	a = 'a';

	printf("%s\n", ft_strchr(s, c));
	printf("%s", ft_strchr(s,a));
}
