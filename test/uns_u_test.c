/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uns_u_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:10:38 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/22 16:19:53 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void    ft_u_decimal(unsigned int nbr, int fd)
{
    if (nbr >= 10)
    {
        ft_u_decimal(nbr / 10, fd);
        ft_u_decimal(nbr % 10, fd);
    }
    else
    {
        nbr = nbr + 48;
        write (fd, &nbr, 1);
    }
}

int main()
{
	unsigned int i;

	i = -1;
	ft_u_decimal(i, 1);
	return (i);
}
