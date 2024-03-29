/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:48:22 by rharutyu          #+#    #+#             */
/*   Updated: 2024/02/07 17:17:41 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	char	*meme;
	size_t	i;

	i = 0;
	meme = ptr;
	while (i < num)
	{
		meme[i] = (unsigned char)value;
		i++;
	}
	return (meme);
}
