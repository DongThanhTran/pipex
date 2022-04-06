/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/08 14:27:46 by dtran         #+#    #+#                 */
/*   Updated: 2021/11/16 19:55:18 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	idx;

	idx = ft_strlen(str);
	while (idx > 0)
	{
		if (str[idx] == (unsigned char)c)
		{
			return ((char *)str + idx);
		}
		idx--;
	}
	if (str[idx] == (unsigned char)c)
	{
		return ((char *)str + idx);
	}
	return (0);
}
