/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_baseformat.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/23 12:31:20 by dtran         #+#    #+#                 */
/*   Updated: 2021/12/10 12:52:06 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_baseformat(size_t num, const char *baseformat)
{
	size_t	base;

	base = ft_strlen(baseformat);
	if (num < base)
		ft_putchar(baseformat[num]);
	else
	{
		ft_putnbr_baseformat(num / base, baseformat);
		ft_putnbr_baseformat(num % base, baseformat);
	}
}

// int return option:

// size_t	ft_putnbr_base(size_t num, const char *baseformat)
// {
// 	size_t	count;
// 	size_t	base;

// 	count = 0;
// 	base = ft_strlen(baseformat);
// 	if (num < base)
// 		count = count + ft_putmchar(baseformat[num]);
// 	else
// 	{
// 		count = count + ft_putnbr_base(num / base, baseformat);
// 		count = count + ft_putnbr_base(num % base, baseformat);
// 	}
// 	return (count);
// }
