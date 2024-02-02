/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:43:45 by rharutyu          #+#    #+#             */
/*   Updated: 2024/02/02 17:56:25 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static size_t	ft_strlen_safe(char const *s)
{
	size_t	len;

	if (s == NULL)
		len = 0;
	else
		return (ft_strlen(s));
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joinstr;
	int		i;
	int		index;

	i = 0;
	index = 0;
	joinstr = (char *)malloc(sizeof(char) * (ft_strlen_safe(s1)
				+ ft_strlen_safe(s2) + 1));
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
