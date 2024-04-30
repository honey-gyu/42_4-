/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:54:30 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/29 20:29:17 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;
	int				i;

	str = (unsigned char *)s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)str + i);
		i--;
	}
	return (0);
}
/*
int	main(void)
{
	char	s[] = "hello";
	char	c = 'e';
	char	a = 'a';

	printf("%s\n", ft_strrchr(s, c));
	printf("%s", ft_strrchr(s, a));
}*/
