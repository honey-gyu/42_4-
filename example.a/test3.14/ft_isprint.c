/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:44:50 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/14 14:46:00 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c<= 126)
		return 1;
	else
		return 0;
}

int	main(void)
{
	char	c;
	c = '^';
	printf("%d", ft_isprint(c));
}

