/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:43:15 by wprintes          #+#    #+#             */
/*   Updated: 2021/11/26 11:40:41 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

# if __APPLE__
#  define IS_MACOS 1
# else
#  define IS_MACOS 0
# endif

int		ft_printf(const char *s, ...);
int		ft_putstr(char *s);
size_t	ft_strlen(const char *s);
int		ft_putchar(const int c);
char	*ft_strchr(const char *str, int c);
char	*ft_itoa(int n);
char	*ft_strdup(const char *str);
int		dec_to_hex(unsigned int a, int cap);
int		dec_to_hex_l(unsigned long a, int cap);
char	*ft_utoa(unsigned int n);

#endif