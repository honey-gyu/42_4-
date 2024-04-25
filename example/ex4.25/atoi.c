/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:37:05 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/25 13:52:35 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	atoi(const char *nptr)
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
			minus *= -1;
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

int	main(void)
{
	char	s[] = "   -123a";

	printf("%d\n", atoi(s));
}
