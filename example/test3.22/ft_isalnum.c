/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:50:09 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/22 13:05:24 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'))
		return 1;
	else if (c >= '0' && c <= '9')
		return 1;
	else
		return 0;
}

int	main(void)
{
	char	c1;
	char	c2;
	char	c3;
	char	c4;

	c1 = 'r';
	c2 = 'G';
	c3 = '7';
	c4 = '*';
	printf("%d", ft_isalnum(c1));
	printf("%d", ft_isalnum(c2));
	printf("%d", ft_isalnum(c3));
	printf("%d", ft_isalnum(c4));
}
