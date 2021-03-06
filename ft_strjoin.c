/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:04:48 by jsato             #+#    #+#             */
/*   Updated: 2021/10/19 22:19:23 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(char const *s1)
{
	size_t	counter;

	counter = 0;
	while (*s1)
	{
		counter++;
		s1++;
	}
	return (counter);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*answ;
	char	*loc;

	if (!s2 || !s1)
		return ((void *)0);
	loc = (char *)malloc(get_len(s1) + get_len(s2) + 1);
	if (loc == (void *)0)
		return ((void *)0);
	answ = loc;
	while (*s1)
	{
		*loc = *s1;
		s1++;
		loc++;
	}
	while (*s2)
	{
		*loc = *s2;
		s2++;
		loc++;
	}
	*loc = *s2;
	return (answ);
}
