/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:23:05 by rharutyu          #+#    #+#             */
/*   Updated: 2024/02/01 13:23:06 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;
	int		j;

	j = 0;
	i = start;
	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	while (s[i] && j < (int)len && !(start >= (unsigned int)ft_strlen(s)))
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
