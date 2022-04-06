/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 15:24:16 by dtran         #+#    #+#                 */
/*   Updated: 2021/11/16 19:52:34 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	int		idx;
	int		len;
	char	*ptr;

	idx = 0;
	if (!str || !f)
		return (NULL);
	len = ft_strlen(str);
	ptr = malloc ((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (str[idx])
	{
		ptr[idx] = (*f)(idx, str[idx]);
		idx++;
	}
	ptr[idx] = '\0';
	return (ptr);
}

// COMMENTS:

// ptr[idx] is a char
