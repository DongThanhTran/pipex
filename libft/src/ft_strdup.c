/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/08 16:41:49 by dtran         #+#    #+#                 */
/*   Updated: 2021/11/16 19:47:14 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ptr;
	int		idx;

	ptr = malloc((ft_strlen(str) + 1) * sizeof(char));
	idx = 0;
	if (!ptr)
		return (0);
	while (str[idx] != '\0')
	{
		ptr[idx] = str[idx];
		idx++;
	}
	ptr[idx] = '\0';
	return (ptr);
}

// COMMENTS:

// OPTION 2 with ft_memcpy:

// char	*ft_strdup(const char *str)
// {
// 	size_t	length;
// 	char	*sCopy;
// 	int		counter;

// 	length = ft_strlen(str) + 1;
// 	sCopy = malloc(length);
// 	counter = 0;
// 	if (sCopy == 0)
// 	{
// 		return (0);
// 	}
// 	ft_memcpy(sCopy, str, length);
// 	return (sCopy);
// }
