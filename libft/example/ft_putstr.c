/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:07:11 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/23 20:13:36 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *s)
{
	while (*s)
		write (1, s++, 1);
}
/*
int	main(void)
{
	char	s[] = "hello";

	ft_putstr(s);
}*/
