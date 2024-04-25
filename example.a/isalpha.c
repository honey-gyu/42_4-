/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:13:12 by hyungyki          #+#    #+#             */
/*   Updated: 2024/03/11 14:44:03 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (2);
	else
		return (0);
}

int	main(void)
{
	char	str[5] = "He11o";
	int	i;

	i = 0;
	while (str[i] != '\0')
		printf("%d\n", isalpha(str[i++]));
}
