/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 16:22:39 by dtran         #+#    #+#                 */
/*   Updated: 2021/12/09 15:45:25 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (c == '\0')
		return (((char *)str) + ft_strlen(str));
	return (ft_memchr(str, c, ft_strlen(str)));
}

// COMMENTS:
// char	*ft_strchr(const char *str, int c)
// {
// 	int	i;

// 	i = 0;
// 	if (c == '\0')
// 		return (((char *)str) + ft_strlen(str));
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] == (unsigned char)c)
// 		{
// 			return ((char *)str + i);
// 		}
// 		i++;
// 	}
// 	if (str[i] == (unsigned char)c)
// 	{
// 		return ((char *)str + i);
// 	}
// 	return (0);
// }

// if statement na while loop is voor '\0' als je die zoekt.
