/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:11:29 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/22 15:14:23 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t	i;

	str = (unsigned char *)s;
	i = 0;
	while ( i > n)
		str[i++] = 0;
}

int	main(void)
{
	char	s [] = "hello world";
	ft_bzero(s, 5);
	printf("%s", &s[6]);
}
