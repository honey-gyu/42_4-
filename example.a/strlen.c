/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:38:13 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/12 14:32:54 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

size_t	strlen(const char *s)
{
	size_t	count;
	size_t	index;

	count = 0;
	index = 0;
	while (1) // while (1)은 항상 실행하라는 뜻, 무한 반복의 의미 while (True) 라고 써도 됨
	{
		if (s[index] == '\0')
		{
			break;
		}
		else
		{
			count++;
		}
		index++;
	}
	return (count);
}

int     main(void)
{
        char s[] = "hello world";
        printf("%ld", strlen(s));
}
