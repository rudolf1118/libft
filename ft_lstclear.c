/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:59:01 by rharutyu          #+#    #+#             */
/*   Updated: 2024/02/02 17:59:02 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*links;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		links = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = links;
	}
	*lst = NULL;
}
