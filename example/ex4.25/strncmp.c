/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:34:23 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/25 13:36:56 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] > s2[i])
		return (s1[i] - s2[i]);
	else
		return (s1[i] - s2[i]);
}
