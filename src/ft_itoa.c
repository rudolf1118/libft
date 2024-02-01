/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:20:46 by rharutyu          #+#    #+#             */
/*   Updated: 2024/02/01 13:20:47 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	count(int num)
{
	int	counter;

	counter = 0;
	while (num != 0)
	{
		num /= 10;
		counter++;
	}
	return (counter);
}

static int	tens(int counter)
{
	int	ten;

	ten = 1;
	while (counter > 1)
	{
		ten *= 10;
		counter--;
	}
	return (ten);
}

static char	*resulter(char *result, int n, int i)
{
	int	ten;
	int	num;

	ten = tens(count(n));
	while (ten != 0)
	{
		num = (n / ten);
		result[i++] = num + '0';
		n = n - ten * num;
		ten /= 10;
	}
	result[i] = '\0';
	return (result);
}

static int	fill(char *result, int n, int minus, int len)
{
	int	i;
	int	ten;

	ten = tens(count(n));
	i = 0;
	if (minus == -1 && len == 12)
	{
		result[0] = '-';
		result[1] = '2';
		i = 2;
	}
	else if (minus == -1)
	{
		result[0] = '-';
		i = 1;
	}
	resulter(result, n, i);
	if (!result)
		return (0);
	return (1);
}

char	*ft_itoa(int n)
{
	int		minus;
	int		len;
	char	*result;

	minus = 1;
	len = count(n);
	if (n == -2147483648)
	{
		n = 147483648;
		minus = -1;
		len += 2;
	}
	else if (n < 0)
	{
		n *= -1;
		len++;
		minus = -1;
	}
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result || !(fill(result, n, minus, len)))
		return (NULL);
	return (result);
}
