/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 23:09:43 by jsato             #+#    #+#             */
/*   Updated: 2021/10/20 23:31:01 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (!new && !*lst && !lst)
		return ;
	if (*lst == 0)
		*lst = new;
	else
	{
		p = ft_lstlast(*lst);
		new->next = 0;
		p->next = new;
	}
}
