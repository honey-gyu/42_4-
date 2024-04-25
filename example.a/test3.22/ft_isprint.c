/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:30:44 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/22 13:59:27 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return 1;
	else
		return 0;
}
int	main(void)
{
	char	c1;
	char	c2;

	c1 = '*';
	c2 = '\t';
	printf("%d", ft_isprint(c1));
	printf("%d", ft_isprint(c2));
}
