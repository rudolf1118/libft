/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:41:32 by rharutyu          #+#    #+#             */
/*   Updated: 2024/02/02 17:57:10 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	temp;

	j = 0;
	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i] == needle[j] && j < ft_strlen(needle) - 1)
		{
			j++;
			i++;
		}
		temp = (i++) + 1;
		if (j == ft_strlen(needle) - 1 && (haystack[i - 1] == needle[j]))
			return ((char *)haystack + temp - ft_strlen(needle));
	}
	return (NULL);
}
