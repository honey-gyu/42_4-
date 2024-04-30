/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:14:13 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/29 20:31:54 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;
	int		se1;
	int		se2;

	if (s1 && s2)
	{
		se1 = ft_strlen(s1);
		se2 = ft_strlen(s2);
		dest = (char *)malloc(sizeof(char) * (se1 + se2 + 1));
		if (dest == 0)
			return (0);
		i = -1;
		while (s1[++i] != '\0')
			dest[i] = s1[i];
		i = 0;
		while (s2[i] != '\0')
			dest[se1++] = s2[i++];
		dest[se1] = '\0';
		return (dest);
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "hello";
	char	s2[] = "world";

	printf("%s\n", ft_strjoin(s1, s2));
	return 0;
}*/
