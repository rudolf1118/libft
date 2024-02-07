/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:38:46 by rharutyu          #+#    #+#             */
/*   Updated: 2024/02/07 18:22:46 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (dst == NULL && dstsize == 0)
		return (0);
	i = 0;
	j = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] != '\0' & j + i + 1 < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i + j < dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *dest = malloc(16);
	dest = memset(dest, 'r', 15);
	dest[15] = '\0';

printf("%s\n", dest);
printf("%zu\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
printf("%s\n", dest);
return (0);
}*/
