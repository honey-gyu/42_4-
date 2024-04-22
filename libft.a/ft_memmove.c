/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 22:19:05 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/29 02:18:29 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*change;
	unsigned char	*str;
	size_t			i;

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
			*(change + n) = *(str + n);
	}
	return (change);
}
/*
void    *ft_memcpy(void *dest, const void *src, size_t n)
{
        unsigned char   *change;
        unsigned char   *str;
        size_t                  i;

        change = (unsigned char *)dest;
        str = (unsigned char *)src;
        if (change == NULL && str == NULL)
                return (NULL);
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
	char dest[] = "12345";
	char *src = dest + 1;
	printf("%p\n", (char *)ft_memmove((void *)0, (void *)0, 5 * sizeof(char)));
	printf("--------------\n");
	printf("%s\n", (char *)ft_memmove(src, dest, 5 * sizeof(char)));
	printf("--------------\n");
//	printf("%s\n", (char *)ft_memcpy(src, dest, 5 * sizeof(char)));
//	printf("%s\n", (char *)ft_memmove(dest, src, 5 * sizeof(char)));
}*/
