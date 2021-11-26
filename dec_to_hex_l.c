/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dec_to_hex_l.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 03:17:23 by coder             #+#    #+#             */
/*   Updated: 2021/11/26 11:50:01 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	dec_to_hex_l(unsigned long a, int cap)
{
	char			*result;
	unsigned long	temp;
	int				places;
	int				index;

	index = 0;
	places = 0;
	if (a == 0 && IS_MACOS == 0)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	if (a < 16)
	{
		if (a < 10)
			ft_putchar (a + '0');
		else
			ft_putchar (a + cap);
		return (3);
	}
	temp = a;
	while (temp > 0)
	{
		temp = temp / 16;
		places++;
	}
	result = malloc(sizeof(char) * places + 1);
	temp = 0;
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
