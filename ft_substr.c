/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:37:03 by jsato             #+#    #+#             */
/*   Updated: 2021/10/19 23:06:54 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		counter;
	char	*loc;
	char	*start_sub;

	if (!s)
		return ((void *)0);
	counter = 0;
	while (start-- && *s)
		s++;
	loc = (char *)malloc(len + 1);
	if (loc == (void *)0)
		return ((void *)0);
	start_sub = loc;
	while (len--)
	{
		*loc = *s;
		loc++;
		s++;
	}
	*loc = 0;
	return (start_sub);
}
