/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:59:29 by rharutyu          #+#    #+#             */
/*   Updated: 2024/02/02 17:59:30 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*links;

	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		links = lst->next;
		f(lst->content);
		lst = links;
	}
}
