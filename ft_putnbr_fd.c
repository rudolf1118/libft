/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:11:28 by rharutyu          #+#    #+#             */
/*   Updated: 2024/02/01 16:11:30 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

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

static int	checker(int n, int fd)
{
	n = 147483648;
	ft_putchar_fd('-', fd);
	ft_putchar_fd('2', fd);
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		len;
	int		num;
	int		ten;
	char	res;

	if (n == -2147483648)
		n = checker(n, fd);
	else if (n < 0)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	len = count(n);
	ten = tens(len);
	while (ten != 0)
	{
		num = n / ten;
		res = num + '0';
		ft_putchar_fd(num + '0', fd);
		n = n - num * ten;
		ten /= 10;
	}
}
