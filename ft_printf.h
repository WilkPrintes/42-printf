/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wilkp90@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:43:15 by wprintes          #+#    #+#             */
/*   Updated: 2021/11/18 22:00:19 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int     ft_printf(const char *s, ...);
int    ft_putstr(char *s);
size_t  ft_strlen(const char *s);
int    ft_putchar(const int c);
char	*ft_strchr(const char *str, int c);
char	*ft_itoa(int n);
char	*ft_strdup(const char *str);
char    *dec_to_hex(int a);