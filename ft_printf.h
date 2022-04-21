/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:02:28 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/21 13:57:17 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h> //to debug

int		ft_printf(int *f, ...);

int		ft_putchar(char c, int fd); //utils
int		*ft_putstr(char *s, int fd);
size_t	ft_strlen(const char *s);
void	ft_pointer(unsigned long int num, char base, int *hex);
void	ft_id_decimal(int nbr, int fd);
void	ft_u_decimal(unsigned int nbr, int fd);

int		c_case(va_list ap); //va_arg to ft_printf function
int		s_case(va_list ap);
int		p_case(va_list ap);
int		d_i_case(va_list ap);
int		u_case(va_list ap);

#endif 
