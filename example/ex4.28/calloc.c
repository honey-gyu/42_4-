/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:16:14 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/28 16:21:40 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

void	*calloc(size_t nmemb, size_t size)
{
	void	*temp;

	temp = malloc(nmemb * size);
	if (!temp)
		return (NULL);
	ft_memset(temp, 0, nmemb * size);
	return (temp);
}

int	main(void)
{
	int	a = 4;
	char	*temp = (char *)calloc(a, 5 * sizeof(char));

	printf("%d\n", *temp);
}
