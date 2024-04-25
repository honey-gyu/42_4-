/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:54:15 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/25 16:44:16 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	while (*s)
		write (fd, s++, 1);
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	char	s[] = "hello";

	ft_putendl_fd(s, 1);
}*/
