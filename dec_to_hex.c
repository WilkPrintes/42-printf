/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dec_to_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wilkp90@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 21:30:10 by wprintes          #+#    #+#             */
/*   Updated: 2021/11/18 22:03:01 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *dec_to_hex(int a)
{
    char *result;
    int temp;
    int places;
    int index;

    index = 0;
    places = 0;
    if (a < 16)
    {
        result = malloc(sizeof(char) * 1);
        if ( a < 10) 
            result[0] = a+'0';
        else     
            result[0] = (a + 87);
        return (result);
    }
    temp = a;
    while (temp > 0)
    {
        temp = temp / 16;
        places++;
    }
    result = malloc(sizeof(char) * places);
    temp = 0;
    while (places > 0)
    {
        temp = (a % 16);
        if (temp < 10)
            result[places - 1] = temp + '0';
        else
            result[places - 1] = (87 + temp);
        a = a/16;
        places--;
    }
    return (result);
}