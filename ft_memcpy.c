/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:38:44 by jsato             #+#    #+#             */
/*   Updated: 2021/10/19 17:26:07 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	unsigned char		*p;
	const char			*src_p;
	size_t				index;

	if (src == (void *)0 && dst == (void *)0)
		return ((void *)0);
	index = 0;
	src_p = (char *)src;
	p = (unsigned char *)dst;
	while (n--)
	{
		p[index] = src_p[index];
		index++;
	}
	return (dst);
}
