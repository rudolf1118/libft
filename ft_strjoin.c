/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:31:25 by rharutyu          #+#    #+#             */
/*   Updated: 2024/02/05 18:31:36 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static size_t	ft_strlen_safe(char const *s)
{
	if (s == NULL)
		return (0);
	return (ft_strlen(s));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*result;
	size_t	i;
	size_t	j;

	i = 0;
	len1 = ft_strlen_safe(s1);
	len2 = ft_strlen_safe(s2);
	result = (char *)malloc(sizeof(char) * (len1 + len2));
	if (!result)
		return (NULL);
	while (i < len1 && s1 != NULL)
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2 && s2 != NULL)
	{
		result[i++] = s2[j++];
	}
	result[i] = '\0';
	return (result);
}
