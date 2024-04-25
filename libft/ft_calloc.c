/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:13:38 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/25 18:34:02 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	change;
	size_t			i;

	str = (unsigned char *)s;
	change = (unsigned char)c;
	i = 0;
	while (i < n)
		str[i++] = change;
	return (str);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*temp;

	temp = malloc(nmemb * size);
	if (temp == 0)
		return (0);
	ft_memset(temp, 0, nmemb * size);
	return (temp);
}
/*
int	main(void)
{
	int	a = 4;
	int	*temp = (int *)ft_calloc(a, 5 * sizeof(int));

	printf("%d", *temp);
}*/
