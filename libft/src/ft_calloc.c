/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/08 16:39:51 by dtran         #+#    #+#                 */
/*   Updated: 2021/11/22 17:40:52 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total;

	total = count * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}

// COMMENTS:

// count = how many blocks on the memory (size of array)
// size = how big the size of the memory in 1 block (size of each element)
// returns: succes --> address of memory block | failure --> null pointer

// OPTION WITHOUT ft_bzero():

// void	*ft_calloc(size_t count, size_t size)
// {
// 	char	*p;
// 	size_t		i;

// 	i = 0;
// 	p = malloc(count * size);
// 	if (p == 0)
// 	{
// 		return (0);
// 	}
// 	while (i < (count * size))
// 	{
// 		p[i] = 0;
// 		i++;
// 	}
// 	return (p);
// }
