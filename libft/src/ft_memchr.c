/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/08 11:48:52 by dtran         #+#    #+#                 */
/*   Updated: 2021/11/22 17:39:07 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t num)
{
	unsigned char	*ptr;
	size_t			idx;

	ptr = (unsigned char *)src;
	idx = 0;
	while (idx < num)
	{
		if (ptr[idx] == (unsigned char)c)
		{
			return ((unsigned char *)src + idx);
		}
		idx++;
	}
	return (0);
}

// COMMENTS:

// unsigned char *ptr has to be made to convert const void *src
// to an unsigned char *, which is initialized with ptr. this is
// because otherwise in the if statement src[idx] would be a
// const void * and could not be compared to c which is an int.
// char has int value.
