/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:13:34 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/11 15:15:13 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	ex1;
	char	ex2;

	ex1 = '3';
	ex2 = 'm';
	printf("%d\n", ft_isdigit(ex1));
	printf("%d\n", ft_isdigit(ex2));
}*/
