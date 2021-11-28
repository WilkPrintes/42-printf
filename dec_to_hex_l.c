/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dec_to_hex_l.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 03:17:23 by wprintes          #+#    #+#             */
/*   Updated: 2021/11/28 20:41:15 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	hex_places_l(unsigned long a);

int	dec_to_hex_l(unsigned long a, int cap)
{
	char			*result;
	unsigned long	temp;
	int				places;

	places = 0;
	if (a == 0 && IS_MACOS == 0)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	places = hex_places_l(a);
	result = malloc(sizeof(char) * places + 1);
	result[places] = '\0';
	while (places > 0)
	{
		temp = (a % 16);
		if (temp < 10)
			result[places - 1] = temp + '0';
		else
			result[places - 1] = (cap + temp);
		a = a / 16;
		places--;
	}
	places = ft_putstr(result);
	free(result);
	return (places + 2);
}

int	hex_places_l(unsigned long a)
{
	unsigned long	temp;
	int				places;

	temp = a;
	places = 0;
	while (temp > 0)
	{
		temp = temp / 16;
		places++;
	}
	return (places);
}
