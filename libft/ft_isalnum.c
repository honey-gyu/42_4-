/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:45:57 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/28 15:18:18 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
//#include <libft.h>

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	ex1;
	char	ex2;
	char	ex3;
	char	ex4;

	ex1 = 'H';
	ex2 = 'i';
	ex3 = '8';
	ex4 = '-';
	printf("%d\n", ft_isalnum(ex1));
	printf("%d\n", ft_isalnum(ex2));
	printf("%d\n", ft_isalnum(ex3));
	printf("%d\n", ft_isalnum(ex4));
}*/
