/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/08 16:41:33 by dtran         #+#    #+#                 */
/*   Updated: 2021/11/16 19:41:34 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *src, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			idx;

	ptr = src;
	idx = 0;
	while (idx < len)
	{
		ptr[idx] = c;
		idx++;
	}
	return (src);
}
