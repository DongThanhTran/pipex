/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 15:24:22 by dtran         #+#    #+#                 */
/*   Updated: 2021/11/16 19:56:32 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_left(char const *str1, char const *set)
{
	int	idx;

	idx = 0;
	while (str1[idx] != '\0')
	{
		if (!ft_strchr(set, str1[idx]))
			break ;
		idx++;
	}
	return (idx);
}

static	int	ft_right(char const *str1, char const *set)
{
	int	idx;

	idx = ft_strlen(str1);
	while (idx > 0)
	{
		if (!ft_strchr(set, str1[idx - 1]))
			break ;
		idx--;
	}
	return (idx);
}

char	*ft_strtrim(char const *str1, char const *set)
{
	int	start;
	int	end;

	if (!str1)
		return (0);
	start = ft_left(str1, set);
	end = ft_right(str1, set);
	if (start > end)
		return (ft_strdup(""));
	return (ft_substr(str1, start, (end - start)));
}

// COMMENTS:
// if (ft_strchr(set, str1[idx]) == 0) "== 0 is gelijk aan false"
// 	idx = ft_strlen(str1); hier eindigt het op de \0 daarom in je if idx - 1
