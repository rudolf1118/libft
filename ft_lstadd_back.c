/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:58:39 by rharutyu          #+#    #+#             */
/*   Updated: 2024/02/02 17:58:40 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*links;

	links = *lst;
	if (!new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		while (links->next != NULL)
			links = links->next;
		links->next = new;
	}
}
