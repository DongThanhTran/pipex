/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/08 10:51:17 by dtran         #+#    #+#                 */
/*   Updated: 2021/11/16 19:54:00 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	size_t	idx;

	idx = 0;
	while (idx < num)
	{
		if (str1[idx] == '\0' || str2[idx] == '\0')
			return ((unsigned char)str1[idx] - (unsigned char)str2[idx]);
		else if (str1[idx] != str2[idx])
		{
			return ((unsigned char)str1[idx] - (unsigned char)str2[idx]);
		}
		idx++;
	}
	return (0);
}

// COMMENTS:

// 	return ((unsigned char)str1[idx] - (unsigned char)str2[idx]);
// \200 is an octal value of a weird char. so you have to cast
// it to an unsigned char otherwise it won't go above 127.
