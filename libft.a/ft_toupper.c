/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 22:40:21 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/29 02:20:53 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c > 'a' && c < 'z')
		c -= 32;
	return (c);
}
/*
int	main(void)
{
	printf("%d\n", ft_toupper('c'));
	printf("%d\n", ft_toupper('{'));
}*/
