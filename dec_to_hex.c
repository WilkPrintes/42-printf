/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dec_to_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 21:30:10 by wprintes          #+#    #+#             */
/*   Updated: 2021/11/26 11:50:05 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	dec_to_hex(unsigned int a, int cap)
{
	char			*result;
	unsigned int	temp;
	int				places;
	int				index;

	index = 0;
	places = 0;
	if (a < 16)
	{
		if (a < 10)
			ft_putchar (a + '0');
		else
			ft_putchar (a + cap);
		return (1);
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
	return (places);
}
