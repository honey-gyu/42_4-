/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:46:47 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/22 12:49:29 by hyungyki         ###   ########.fr       */
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
	char	c1;
	char	c2;

	c1 = '4';
	c2 = 'h';
	printf("%d", ft_isdigit(c1));
	printf("%d", ft_isdigit(c2));
}
