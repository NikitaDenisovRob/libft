/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:49:08 by jsato             #+#    #+#             */
/*   Updated: 2021/10/18 15:33:26 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char			*p;
	unsigned char			char_to_insert;

	p = (unsigned char *)b;
	char_to_insert = (unsigned char)c;
	while (len)
	{
		*p = char_to_insert;
		p++;
		len--;
	}
	return (b);
}
