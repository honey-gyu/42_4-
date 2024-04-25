/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:17:26 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/22 14:26:06 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	change;
	size_t	i;

	str = (unsigned char *)s;
	change = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		str[i++] = change;
	}
	return (str);
}

int	main(void)
{
	char s[] = "hello world";
	printf("%s", (char *)ft_memset(s, 'c', 5 * sizeof(char)));
}
