/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:48:07 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/11 14:50:17 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (2);
	else
		return (0);
}
/*
int	main(void)
{
	char	ex1;
	char	ex2;
	char	ex3;

	ex1 = 'H';
	ex2 = 'i';
	ex3 = '7';
	printf("%d\n", ft_isalpha(ex1));
	printf("%d\n", ft_isalpha(ex2));
	printf("%d\n", ft_isalpha(ex3));
}*/
