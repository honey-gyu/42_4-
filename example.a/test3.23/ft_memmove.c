/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 07:00:19 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/24 07:31:34 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*change;
	unsigned char	*str;

	change = (unsigned char *)dest;
	str = (unsigned char *)src;
	if (change == NULL && str == NULL)
		return (NULL);
	if (change < str)
	{
		while (n--)
			*change++ = *str++;
	}
	else
	{
		change = change + n - 1; // ??
		str = str + n; // ??
		while (n--)
			*change-- = *str--;
	}
	return (change); // dest와 change의 출력이 왜 다른가
}

int	main(void)
{
	char dest[] = "12345";
	char *src = dest + 1;
//	printf("%s\n", (char *)ft_memmove(src, dest, 5 * sizeof(char)));
	printf("%s\n", (char *)ft_memmove(dest, src, 5 * sizeof(char)));
}
