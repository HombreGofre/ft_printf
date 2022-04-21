/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_case.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:42:25 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/21 14:11:14 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_prinft.h"

int	*ft_putstr(char *str, int fd)
{
	int		i;
	int		str;

	if (!s)
	{
		str += write(fd, "(NULL)", 6);
		return (str);
	}
	while (s[i])
	{
		str += write(fd, &s[i], 1);
		i++;
	}
	return (str);
}

int	s_case(va_list ap)
{
	char	*str;
	int	s_case;

	str = va_arg(ap, char *);
	s_case = ft_putstr(str, 1);
	return (s_case);
}
