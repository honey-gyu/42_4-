/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 20:11:03 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/30 20:20:31 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*change;
	unsigned char	*str;
	size_t	i;

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

int	main(void)
{
	char dest[] = "12345";
	char *src = dest + 1;

	printf("%p\n", dest);
	printf("%p\n", src);
//	printf("%s\n", (char *)ft_memmove(dest, src, 5 * sizeof(char)));
	printf("%s\n", (char *)ft_memmove(src, dest, 5 * sizeof(char)));
}

