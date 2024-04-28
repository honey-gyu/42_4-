/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:15:11 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/28 15:19:07 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
//#include <libft.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*change;
	unsigned char	*str;
	size_t			i;

	change = (unsigned char *)dest;
	str = (unsigned char *)src;
	i = 0;
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
			*(change + n) = *(str + n);
	}
	return (change);
}
/*
int	main(void)
{
	char	dest[] = "12345";
	char	*src = dest + 1;
	printf("%p\n", (char *)ft_memmove((void *)0, (void *)0, 5 * sizeof(char)));
//	printf("%s\n", (char *)ft_memmove(dest, src, 5 * sizeof(char)));
	printf("%s\n", (char *)ft_memmove(src, dest, 5 * sizeof(char)));
//	printf("%s\n", (char *)ft_memcpy(src, dest, 5 * sizeof(char)));
}*/
