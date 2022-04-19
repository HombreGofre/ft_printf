/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_case.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:42:25 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/19 14:10:17 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_prinft.h"

char	*ft_putstr(char *s, int fd)
{
	int		i;
	char	str;

	if (!s)
	{
		str = write(fd, "(NULL)", 6);
		return (str);
	}
	while (s[i])
	{
		str = write(fd, &s[i], 1);
		i++;
	}
	return (str);
}

char	s_case(va_list ap)
{
	int		s;
	char	s_case;

	s = va_arg(ap, char *);
	s_case = ft_putstr(s, 1);
	return (s_case);
}
