/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putendl_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:36:57 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/26 14:39:04 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putendl_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	while (*s)
		write (fd , s++, 1);
	write (fd, "\n", 1);
}

int	main(void)
{
	char	s[] = "hello";

	putendl_fd(s, 1);
}
