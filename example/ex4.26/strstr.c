/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:23:12 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/26 15:30:01 by hyungyki         ###   ########.fr       */
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
	if (needle[0] == '\0')
		return ((char *)hay);
	while (hay[i] != '\0')
	{
		j = 0;
		while (hay[i + j] == nee[j])
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
	char	hay[] = "helloworld";
	char	nee[] = "world";

	printf("%s\n", strstr(hay, nee));
}
