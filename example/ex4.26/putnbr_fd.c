/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:48:07 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/26 14:55:58 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else if (n < 0)
	{
		n *= -1;
		write (fd, "-", 1);
		putnbr_fd(n, fd);
	}
	else if (n <= 9)
	{
		n = n + '0';
		write (fd, &n, 1);
	}
	else
	{
		putnbr_fd(n / 10, fd);
		putnbr_fd(n % 10, fd);
	}
}

int	main(void)
{
	putnbr_fd(-123, 1);
	putnbr_fd(5678, 1);
}
