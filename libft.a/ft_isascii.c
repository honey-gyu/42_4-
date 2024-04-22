/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:47:30 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/11 17:52:39 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	ex1;
	char	ex2;

	ex1 = '?';
	ex2 = ' ';
	printf("%d\n", ft_isascii(ex1));
	printf("%d\n", ft_isascii(ex2));
}*/
