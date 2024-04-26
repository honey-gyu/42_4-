/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:56:43 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/26 15:00:16 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*change;
	unsigned char	*str;
	size_t	i;

	change = (unsigned char *)dest;
	str = (unsigned char *)src;
	i = 0;
	if (change == NULL && str == NULL)
		return (NULL);
	while (i < n)
	{
		change[i] = str[i];
		i++;
	}
	return (change);
}

int	main(void)
{
	char	dest[] = "hello";
	char	*src = dest + 1;

	printf("%s\n", (char *)memcpy(dest, src, 5 * sizeof(char)));
}
