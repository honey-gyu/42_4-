/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:24:19 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/24 07:28:13 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*change;
	unsigned char	*str;
	size_t	i;

	change = (unsigned char *)dest;
	str = (unsigned char *)src;
	if (change == NULL && str == NULL)
		return NULL;
	i = 0;
	while (i < n)
	{
		change[i] = str[i];
		i++;
	}
	return (change);
}

int	main(void)
{
	char dest1[] = "12345";
	char *src = dest1 + 1;

//	printf("%s\n", (char *)ft_memcpy(dest1, src, 5 * sizeof(char)));
	printf("%s\n", (char *)ft_memcpy(src, dest1, 5 * sizeof(char)));
}
