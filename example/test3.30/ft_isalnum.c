/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:45:14 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/30 15:47:43 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ( c >= '0' && c <= '9')
		return 1;
	else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return 1;
	else
		return 0;
}

int	main(void)
{
	char c1 = '2';
	char c2 = 'f';
	char c3 = 'F';
	char c4 = '^';

	printf("%d\n", ft_isalnum(c1));
	printf("%d\n", ft_isalnum(c2));
	printf("%d\n", ft_isalnum(c3));
	printf("%d\n", ft_isalnum(c4));
}
