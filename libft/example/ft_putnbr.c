/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:32:57 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/25 15:37:16 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb *= -1;
		write (1, "-", 1);
		ft_putnbr(nb);
	}
	else if (nb <= 9)
	{
		nb = nb + '0';
		write (1, &nb, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(-123);
	printf("\n");
	ft_putnbr(6789);
}*/
