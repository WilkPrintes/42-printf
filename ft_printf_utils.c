/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wilkp90@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:57:25 by wprintes          #+#    #+#             */
/*   Updated: 2021/11/16 00:40:41 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

size_t	ft_putstr(char *s)
{
    size_t count;

    count = 0;
	if (s)
	{
		while (s[count] != '\0')
		{
			write(1, &s[count], 1);
			count++;
		}
	}
    return (count);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
    return (1);
}

size_t	ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while (s[counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_strchr(const char *str, int c)
{
	char	s1;

	s1 = c;
	while (*str != '\0')
	{
		if (*str == s1)
			return ((char *) str);
		str++;
	}
	if (s1 == '\0')
		return ((char *) str);
	return (NULL);
}

char	*ft_strdup(const char *str)
{
	size_t	i;
	size_t	len;
	char	*s;

	if (!str)
		return (NULL);
	i = 0;
	len = ft_strlen(str) + 1;
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}