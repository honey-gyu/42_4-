/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:27:29 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/29 20:33:06 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	i = 0;
	if (s[0] == '\0')
		return (NULL);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == 0)
		return (NULL);
	while (i < len && start < ft_strlen(s))
		dest[i++] = s[start++];
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	s[] = "hello world";
	char	s1[] = "";

	printf("%s\n", ft_substr(s1, 5, 5));
	printf("%s\n", ft_substr(s, 7, 3));
	printf("%s\n", ft_substr(s, 15, 10));
}*/
