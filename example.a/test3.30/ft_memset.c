/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 18:38:48 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/30 20:02:57 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	change;
	size_t i;

	str = (unsigned char *)s;
	change = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		str[i] = change;
		i++;
	}
	return (str);
}

int	main(void)
{
	char s[] = "honeygyu";
	char c = 'a';

	printf("%s\n", (char *)ft_memset(s, c, 5 * sizeof(char)));
}
