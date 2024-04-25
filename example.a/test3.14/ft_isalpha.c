/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:21:14 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/14 14:30:15 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	else if (c >= 'A' && c <= 'Z')
		return 2;
	else
		return 0;
}

int	main(void)
{
	char	c;
	c = 'a';
	printf("%d", isalpha(c));
}
