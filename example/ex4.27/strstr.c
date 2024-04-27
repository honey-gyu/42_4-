/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:34:28 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/27 14:42:30 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*strstr(const char *haystack, const char *needle)
{
	unsigned char	*hay;
	unsigned char	*nee;
	int	i;
	int	j;

	i = 0;
	hay = (unsigned char *)haystack;
	nee = (unsigned char *)needle;
	if (nee[0] == '\0')
		return ((char *)hay);
	while (hay[i] != '\0' && i < len)
	{
		j = 0;
		while (hay[i + j] == nee[j] && i + j < len)
		{
			j++;
			if (nee[j] == '\0')
				return ((char *)&hay[i]);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	hay[] = "helloworld;
	char	nee[] = "world";

	printf("%s\n", hay, nee);
}
