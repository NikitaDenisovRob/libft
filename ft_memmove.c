/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:04:16 by jsato             #+#    #+#             */
/*   Updated: 2021/10/19 22:36:47 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_p;
	unsigned char	*src_p;
	size_t			counter;

	dst_p = (unsigned char *)dst;
	src_p = (unsigned char *)src;
	if (dst == (void *)0 && src == (void *)0)
		return ((void *)0);
	if (dst_p > src_p && ((src_p + len) > dst_p))
	{
		while (len)
		{
			dst_p[len - 1] = src_p[len - 1];
			len--;
		}
		return (dst);
	}
	counter = 0;
	while (len--)
	{
		dst_p[counter] = src_p[counter];
		counter++;
	}
	return (dst);
}
