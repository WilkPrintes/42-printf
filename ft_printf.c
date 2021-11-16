/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wilkp90@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:43:09 by wprintes          #+#    #+#             */
/*   Updated: 2021/11/16 00:38:59 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int arg_flags(char *s, int count, va_list args);

int ft_printf(const char *s, ...)
{
    va_list paramets;
    int count;
    int total;
    
    count = 0;
    total = 0;
    va_start(paramets, s);
    while (s[count] != '\0')
    {
        if (s[count] == '%' && ft_strchr("cspdiuxX%", s[count + 1]))
        {
            count++;
            total = total + arg_flags((char *)s, count, paramets);
            count++;
        }
        total++;
        write(1, &s[count],1);
        count++;
    }
    va_end(paramets);
    return (total);
}

int arg_flags(char *s, int count, va_list args)
{
    int total;

    total = 0;
    if (s[count] == 's')
        total = ft_putstr(va_arg(args, char *));
    else if (s[count] == 'c')
        total = ft_putchar(va_arg(args, int));
    else if (s[count] == 'd')
        total = ft_putstr(ft_itoa(va_arg(args, int)));
    return(total);
}