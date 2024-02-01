/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:43:45 by rharutyu          #+#    #+#             */
/*   Updated: 2024/02/01 13:43:46 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joinstr;
	int		i;
	int		index;

	i = 0;
	index = 0;
	joinstr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)
				+ 1));
	if (!joinstr)
		return (NULL);
	while (i < (int)ft_strlen(s1))
	{
		joinstr[index] = s1[i];
		i++;
		index++;
	}
	i = 0;
	while (i < (int)ft_strlen(s2))
	{
		joinstr[index] = s2[i];
		i++;
		index++;
	}
	joinstr[index] = '\0';
	return (joinstr);
}
