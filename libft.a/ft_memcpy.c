/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 19:46:41 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/24 07:27:26 by hyungyki         ###   ########.fr       */
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
	printf("오염이 된 메모리 확인\n");
	printf("%p\n", (char *)ft_memcpy(src1, dest1, 5 * sizeof(char)));

	printf("배열의 메모리 확인\n");
	printf("%p\n", dest1);
	printf("%p\n", src1);

	printf("-----------------------------\n");
	printf("메모리 오염(중첩) 출력d>s  \n");
	printf("%s\n", (char *)ft_memcpy(src1, dest1, 5 * sizeof(char)));

        char dest2[] = "honey";
        char *src2 = dest2 + 1;

	printf("같은 주소값의 메모리 복사\n");
	printf("%s\n", (char *)ft_memcpy(dest2, src2, 5 * sizeof(char)));
	
        printf("-----------------------------\n");
	char dest3[] = "hello world";
	char src3[] = "honeygyu";
	printf("다른 주소값  메모리 복사\n");
        printf("%s\n", (char *)ft_memcpy(dest3, src3, 8 * sizeof(char)));	
	printf("메모리 전체 복사\n"); 
	printf("%s\n", (char *)ft_memcpy(dest3, src3, 8 * sizeof(char) + 1));
}*/
