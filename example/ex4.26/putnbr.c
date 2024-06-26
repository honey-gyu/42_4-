/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:39:14 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/26 14:47:23 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putnbr(int n)
{
	if (n == -2147483648)
		write (1, "-2147483648", 11);
	else if (n < 0)
	{
		n *= -1;
		write (1, "-", 1);
		putnbr(n);
	}
	else if (n <= 9)
	{
		n = n + '0';
		write (1, &n, 1);
	}
	else
	{
		putnbr(n / 10);
		putnbr(n % 10);
	}
}

int	main(void)
{
	putnbr(-123);
	putnbr(6789);
}
