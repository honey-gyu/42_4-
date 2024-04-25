/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:41:18 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/14 14:44:06 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return 1;
	else
		return 0;
}

int	main(void)
{
	char	c;
	c = '*';
	printf("%d", ft_isascii(c));
}
