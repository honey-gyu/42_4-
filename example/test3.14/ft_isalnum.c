/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:33:40 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/14 14:37:00 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return 1;
	else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return 1;
	else
		return 0;
}

int	main(void)
{
	char	c;
	c = '3';
	printf("%d", ft_isalnum(c));
}
