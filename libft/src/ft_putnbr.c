/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 15:23:50 by dtran         #+#    #+#                 */
/*   Updated: 2021/12/10 12:18:14 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int num)
{
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (num < 0)
	{
		num = num * -1;
		ft_putchar('-');
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_putchar(num + '0');
}

// return int version:

// int	ft_putnbr(int num)
// {
// 	int	count;

// 	count = 0;
// 	if (num == -2147483648)
// 		return (write(1, "-2147483648", 11));
// 	if (num < 0)
// 	{
// 		num = num * -1;
// 		ft_putchar('-');
// 		count = 1;
// 	}
// 	if (num > 9)
// 	{
// 		ft_putnbr(num / 10);
// 		ft_putnbr(num % 10);
// 	}
// 	else
// 		ft_putchar(num + '0');
// 	return (ft_intlen(num) + count);
// }
