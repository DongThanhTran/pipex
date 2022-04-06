/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/08 16:42:04 by dtran         #+#    #+#                 */
/*   Updated: 2021/11/16 19:51:40 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;

	idx = 0;
	if (dstsize <= 0)
		return (ft_strlen(src));
	while (src[idx] != '\0' && idx < dstsize - 1)
	{
		dst[idx] = src[idx];
		idx++;
	}
	dst[idx] = '\0';
	return (ft_strlen(src));
}
