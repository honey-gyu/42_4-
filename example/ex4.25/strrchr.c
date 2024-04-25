/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:33:42 by hyungyki          #+#    #+#             */
/*   Updated: 2024/04/25 13:34:00 by hyungyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

size_t  strlen(const char *s)
{
        size_t  i;

        i = 0;
        while (s[i] != '\0')
                i++;
        return (i);
}

char    *ft_strrchr(const char *s, int c)
{
        unsigned char   *str;
        int     i;

        str = (unsigned char *)s;
        i = strlen(s);
        while (i != 0)
        {
                if (str[i] == c)
                        return ((char *)str + i);
                i--;
        }
        return (0);
}
int     main(void)
{
        char    s[] = "hello";
        char    c = 'l';

        printf("%s", ft_strrchr(s, c));
}

