/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 17:10:59 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/28 17:16:58 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	i = 0;
	if (s[0] == '\0')
		return (NULL);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (i < len && start < ft_strlen(s))
		dest[i++] = s[start++];
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	s[] = "hello world";

	printf("%s\n", substr(s, 5, 7));
}
