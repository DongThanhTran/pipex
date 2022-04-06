/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/16 20:11:38 by dtran         #+#    #+#                 */
/*   Updated: 2021/11/16 20:16:52 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	idx;

	idx = 0;
	while (src[idx])
	{
		dst[idx] = src[idx];
		idx++;
	}
	dst[idx] = '\0';
	return (dst);
}
