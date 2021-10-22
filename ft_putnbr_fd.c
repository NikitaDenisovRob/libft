/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:22:59 by jsato             #+#    #+#             */
/*   Updated: 2021/10/16 13:36:02 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ptnb(long n, int fd)
{
	char	value;

	if ((n / 10) == 0)
	{
		value = n % 10 + '0';
		write(fd, &value, 1);
		return ;
	}
	else
	{	
		ptnb(n / 10, fd);
		value = n % 10 + '0';
		write(fd, &value, 1);
		return ;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long	m;

	m = n;
	if (m < 0)
	{
		write(fd, "-", 1);
		m *= -1;
	}
	ptnb(m, fd);
}
