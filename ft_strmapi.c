/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:12:41 by jsato             #+#    #+#             */
/*   Updated: 2021/10/19 18:18:42 by jsato            ###   ########.fr       */
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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*loc;

	if (!s || !f)
		return ((void *)0);
	loc = (char *)malloc(get_len(s) + 1);
	if (loc == (void *)0)
		return ((void *)0);
	index = 0;
	while (s[index])
	{
		*(loc + index) = f(index, s[index]);
		index++;
	}
	loc[get_len(s)] = 0;
	return (loc);
}
