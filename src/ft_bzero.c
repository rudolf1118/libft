/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:26:28 by rharutyu          #+#    #+#             */
/*   Updated: 2024/01/26 13:27:37 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_bzero(void *str, size_t num)
{
	char	*string;
	size_t	i;

	string = str;
    if (!str)
        return ;
	i = 0;
	while (i < num)
	{
		string[i] = 0;
		i++;
	}
}
