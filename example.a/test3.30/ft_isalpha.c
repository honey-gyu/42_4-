/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:40:00 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/30 15:42:41 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	else if (c >= 'A' && c <= 'Z')
		return 2;
	else
		return 0;
}
int	main(void)
{
	char c1 = 'a';
	char c2 = 'A';
	char c3 = '3';

	printf("%d\n", ft_isalpha(c1));
	printf("%d\n", ft_isalpha(c2));
	printf("%d\n", ft_isalpha(c3));
}
