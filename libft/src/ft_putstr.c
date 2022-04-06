/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 15:23:59 by dtran         #+#    #+#                 */
/*   Updated: 2021/12/10 12:31:23 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *str)
{
	if (!str)
		return ;
	write(1, str, ft_strlen(str));
}

// int return version:

// int	ft_putstr(char *str)
// {
// 	if (!str)
// 		return (write(1, "(null)", 6));
// 	return (write(1, str, ft_strlen(str)));
// }
