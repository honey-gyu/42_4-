/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:34:51 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/29 16:09:03 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	num;
	int	minus;

	i = 0;
	num = 0;
	minus = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			minus = -minus;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num *= 10;
		num = num + (nptr[i] - '0');
		i++;
	}
	return (num * minus);
}
/*
int	main(void)
{
	char s0[] = "0";
	char s1[] = "  +1234";
	char s2[] = "  ++12340";
	char s3[] = "  --1230-44";
	char s4[] = " -123asd";
	char s5[] = "    1234a1";

	printf("%d\n", ft_atoi(s0));
	printf("%d\n", ft_atoi(s1));
	printf("%d\n", ft_atoi(s2));
	printf("%d\n", ft_atoi(s3));
	printf("%d\n", ft_atoi(s4));
	printf("%d\n", ft_atoi(s5));
}*/
