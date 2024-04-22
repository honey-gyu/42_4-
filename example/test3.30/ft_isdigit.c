/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:43:06 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/30 15:44:18 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return 1;
	else
		return 0;
}

int	main(void)
{
	char c1 = '3';
	char c2 = 'a';

	printf("%d\n", ft_isdigit(c1));
	printf("%d\n", ft_isdigit(c2));
}
