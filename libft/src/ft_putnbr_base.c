/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/10 12:59:39 by dtran         #+#    #+#                 */
/*   Updated: 2021/12/10 17:32:11 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(int num, char *base)
{
	int		lbase;

	lbase = 0;
	if (num > 0)
		num *= -1;
	else
		ft_putchar('-');
	while (base[lbase])
		lbase++;
	if (num < -lbase)
	{
		ft_putnbr_base(num / lbase, base);
		ft_putnbr_base(num % lbase, base);
	}
}
