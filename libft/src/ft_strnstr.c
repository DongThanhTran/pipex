/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/08 16:42:15 by dtran         #+#    #+#                 */
/*   Updated: 2021/11/22 16:58:31 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	idx1;
	size_t	idx2;

	idx1 = 0;
	if (!*needle)
		return ((char *)haystack);
	while (idx1 < len && haystack[idx1] != '\0')
	{
		idx2 = 0;
		while (haystack[idx1 + idx2] == needle[idx2] && idx1 + idx2 < len)
		{
			idx2++;
			if (needle[idx2] == '\0')
				return (((char *)haystack) + idx1);
		}
		idx2 = 0;
		idx1++;
	}
	return (0);
}

// COMMENTS:

	// idx2 = 0;
	// // Basicaly strcmp, consider making the fucntion strcmp
	// while (haystack[idx1 + idx2] == needle[idx2] && idx1 + idx2 < len)
	// {
	// 	idx2++;
	// 	if (needle[idx2] == '\0')
	// 		return (((char *)haystack) + idx1);
	// }
	// idx2 = 0;
	// idx1++;

// COMMENTS:
// if (!*needle) //same as (needle[idx1] == '\0')
