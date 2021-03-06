/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:02:28 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/27 11:27:19 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h> //to debug
# include <limits.h>

int		ft_printf(char const *format, ...);

int		ft_putchar(char c, int fd); //utils
int		ft_putstr(char *s, int fd);
size_t	ft_strlen(char *s);
char	*ft_strdup(const char *s);
void	ft_pointer(unsigned long int nbr, char *base, int *hex);
void	ft_id_decimal(int nbr, int fd, int *dec);
void	ft_u_decimal(unsigned int nbr, int fd, unsigned int *udec);
void	ft_x_hexdec(unsigned int num, char *base, int *hex);

int		c_case(va_list ap); //va_arg to ft_printf function
int		s_case(va_list ap);
int		p_case(va_list ap);
int		d_i_case(va_list ap);
int		u_case(va_list ap);
int		x_case(va_list ap);
int		up_x_case(va_list ap);
int		dif_cases(char const *format, va_list ap, int *cs);

#endif 
