/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:02:28 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/20 13:16:43 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(int *f, ...);

int		ft_putchar(char c, int fd); //utils
char	*ft_putstr(char *s, int fd);
size_t	ft_strlen(const char *s);
void	ft_pointer(unsigned long int num, char base, int *hex);

int		c_case(va_list ap); //va_arg to ft_printf function
char	s_case(va_list ap);
int		p_case(va_list ap);

#endif 
