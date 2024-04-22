/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 19:52:22 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/22 20:03:27 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
void    *ft_memcpy(void *dest, const void *src, size_t n)
{
        size_t  i;
        char    *s;
        char    *d;

	i = 0;
        s = (char *)src;
        d = (char *)dest;
        while (i < n)
        {
                d[i] = s[i];
                i++;
        }
        d[i] = 0;
        return (dest);
}
/*
#include <stdio.h>
int     main()
{
        char dest[] = "dest";
        char src[] = "src";
        size_t n = 3;
        
	printf("%s\n", dest);
        ft_memcpy(src + 1, src, n);
        printf("%s\n", dest);
        printf("%s\n", src);
        return (0);
}*/
// 위 코드의 main()을 아래와 같이 바꿔서, 변경 전 후 비교하며 분석해보기
#include <stdio.h>
int     main(void)
{
        char dest[] = "dest";
        char src[] = "src";
        size_t n = 3;

	printf("%llu %llu \n", (unsigned long long)dest, (unsigned long long)src);
        printf("%s\n", dest);
        ft_memcpy(src + 1, src, n);
        printf("%s\n", dest);
        printf("%s\n", src);
        return (0);
}

