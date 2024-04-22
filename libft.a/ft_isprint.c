/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:00:24 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/11 18:20:39 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	ex1;
	char	ex2;

	ex1 = '~';
	ex2 = 13;
	printf("%d\n", ft_isprint(ex1));
	printf("%d\n", ft_isprint(ex2));
}*/
