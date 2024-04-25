/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 20:55:47 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/24 07:04:11 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;
	unsigned char	*str;
	size_t				i;

	temp = (unsigned char *)dest;
	str = (unsigned char *)src;
	i = 0;
	if (temp == NULL && str == NULL)
		return (NULL);
	while (i < n)
	{
		temp[i] = str[i];
		i++;
	}
	return (temp);
}

int	main(void)
{
	char	src[] = "honey";
	char	dest1[] = "123456789";
	char	*temp = dest1 + 1;

	printf("%p\n", src);
	printf("%p\n", dest1);
	printf("%p\n", (char*)ft_memcpy((void *)0, (void *)0, 5 * sizeof(char)));

	printf("-------\n");
	printf("%s\n", (char *)ft_memcpy(temp, dest1, 5 * sizeof(char)));
	printf("%s\n", (char *)ft_memcpy(dest1, src, 5 * sizeof(char)));
	printf("%s\n", (char *)ft_memcpy(dest1, src, 5 * sizeof(char) + 1));
}
