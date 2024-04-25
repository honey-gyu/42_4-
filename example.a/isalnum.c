/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:01:00 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/11 16:06:59 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (2);
	else if (c >= 'a' && c <= 'z')
		return (3);
	else
		return (0);
}

int	main(void)
{
	char	str[] = "He110 w+o-r1D";
	int	i;

	i = 0;
	while (str[i] != '\0')
		printf("%d\n", isalnum(str[i++]));
}
