/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:46:24 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/23 16:05:29 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*change;
	unsigned char	*str;
	size_t			i;

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
/*
int	main(void)
{
	char dest1[] = "12345";
	char *src1 = dest1 + 1;

	printf("메모리 null일 경우\n");
	printf("%p\n", (char *)ft_memcpy((void *)0, (void *)0, 5 * sizeof(char)));

	printf("메모리 오염(중첩) 출력 dest > src \n");
	printf("%s\n", (char *)ft_memcpy(src1, dest1, 5 * sizeof(char)));

	char dest2[] = "honey";
	char *src2 = dest2 + 1;
	printf("같은 주소값 메모리 복사\n");
	printf("%s\n", (char *)ft_memcpy(dest2, src2, 5 * sizeof(char)));
}*/
