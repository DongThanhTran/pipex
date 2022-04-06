/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 15:24:25 by dtran         #+#    #+#                 */
/*   Updated: 2021/11/23 18:02:50 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substring;
	size_t	strlen;

	if (!str)
		return (0);
	strlen = ft_strlen(str);
	if (str == '\0')
		return (0);
	if (strlen < start)
		return (ft_strdup(""));
	if (strlen < len)
		return (ft_strdup(start + str));
	if ((strlen - start) < len)
		len = strlen - start;
	substring = (char *)ft_calloc(len + 1, sizeof(char));
	if (!substring)
		return (0);
	if (start >= strlen)
		return (substring);
	ft_strlcpy(substring, str + start, len + 1);
	return (substring);
}

// COMMENTS:

// ft_strlcpy(substring, str + start, len + 1);
// strlcpy purely for src --> dest.
