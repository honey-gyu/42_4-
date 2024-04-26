/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:04:13 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/26 15:08:35 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*change;
	unsigned char	*str;
	size_t	i;

	i = 0;
	change = (unsigned char *)dest;
	str = (unsigned char *)src;
	if (change == NULL && str == NULL)
		return (NULL);
	if (change < str)
	{
		while (i < n)
		{
			change[i] = str[i];
			i++;
		}
	}
	else
	{
		while (n--)
		{
			*(change + n) = *(str + n);
		}
	}
	return (change);
}

int	main(void)
{
	char	dest[] = "hello";
	char	*src = dest + 1;

	printf("%s\n", (char *)memmove(dest, src, 5 * sizeof(char)));
	printf("%s\n", (char *)memmove(src, dest, 6 * sizeof(char)));
}
