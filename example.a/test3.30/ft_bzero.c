/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 19:55:29 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/30 19:58:19 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t	i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

int	main(void)
{
	char s[] = "honeygyu";
	size_t len = 5;
	ft_bzero(s, len);
	printf("%s\n", &s[5]);
	printf("%s\n", &s[4]);
}

