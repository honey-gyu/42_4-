/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:29:35 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/22 12:35:31 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return 1;
	else if (c >= 'a' && c <= 'z')
		return 2;
	else
		return 0;
}

int	main(void)
{
	char	c1;
	char	c2;
	char	c3;

	c1 = '3';
	c2 = 'H';
	c3 = 'u';
	printf("%d", ft_isalpha(c1));
	printf("%d", ft_isalpha(c2));
	printf("%d", ft_isalpha(c3));
}
