/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:13:38 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/29 20:29:56 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*temp;

	temp = malloc(nmemb * size);
	if (temp == 0)
		return (0);
	ft_memset(temp, 0, nmemb * size);
	return (temp);
}
/*
int	main(void)
{
	int	a = 4;
	int	*temp = (int *)ft_calloc(a, 5 * sizeof(int));

	printf("%d", *temp);
}*/
