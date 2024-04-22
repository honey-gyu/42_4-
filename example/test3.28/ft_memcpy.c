/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:57:05 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/28 16:03:53 by hyungyki         ###   ########.fr       */
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
	char ex1[] = "honeygyu";
	char dest1[] = "12345";
	char *src = dest1 + 1;
	char dest2[] = "12345";
	char dest3[] = "";

	printf("메모리 null일 경우\n");
	printf("%p\n", (char *)ft_memcpy((void *)0, (void *)0, 5 * sizeof(char)));
	printf("메모리 오염일 경우\n");
	printf("%p\n", (char *)ft_memcpy(src, dest1, 5 * sizeof(char)));
	printf("배열의 메모리 확인\n");
	printf("%p\n", dest1);
	printf("%p\n", src);
	printf("%p\n", ex1);

	printf("메모리 오염 출력\n");
	printf("%s\n", (char *)ft_memcpy(src, dest1, 5 * sizeof(char)));
	printf("메모리 복사\n");
	printf("%s\n", (char *)ft_memcpy(ex1, dest2, 5 * sizeof(char)));
	printf("메모리 전체 복사\n");
	printf("%s\n", (char *)ft_memcpy(ex1, dest2, 5 * sizeof(char) + 1));
}
