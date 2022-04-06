/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/16 20:03:06 by dtran         #+#    #+#                 */
/*   Updated: 2021/12/10 12:16:47 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// int return version:

// int	ft_putchar(char c)
// {
// 	return (write(1, &c, 1));
// }
