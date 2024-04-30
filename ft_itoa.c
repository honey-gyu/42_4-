/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <hyungyki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 15:23:05 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/29 20:30:45 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		len;

	len = ft_len(n);
	dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	if (n < 0)
	{
		dest[0] = '-';
		n *= -1;
	}
	if (n == 0)
		dest[0] = '0';
	dest[len--] = '\0';
	while (n > 0)
	{
		dest[len] = n % 10 + '0';
		len--;
		n /= 10;
	}
	return (dest);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(-123));
// }
