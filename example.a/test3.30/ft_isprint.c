/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:49:49 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/30 18:15:54 by hyungyki         ###   ########.fr       */
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
	char c1 = '\t';
	char c2 = '^';

	printf("%d\n", ft_isprint(c1));
	printf("%d\n", ft_isprint(c2));
}
