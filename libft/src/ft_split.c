/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 15:24:02 by dtran         #+#    #+#                 */
/*   Updated: 2021/11/16 19:45:46 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_tofree(char **str, int len)
{
	int	idx;

	idx = 0;
	while (idx < len)
	{
		free(str[idx]);
		idx++;
	}
	free(str);
}

static	char	*ft_copysubarr(char *str, char c)
{
	int		idx;
	int		len;
	char	*subarrtemp;
	char	*pos;

	idx = 0;
	len = 0;
	pos = (char *)str;
	while (*str && *str != c)
	{
		str++;
		len++;
	}
	str = pos;
	subarrtemp = malloc ((len + 1) * sizeof(char));
	if (!subarrtemp)
		return (0);
	while (idx < len)
	{
		subarrtemp[idx] = str[idx];
		idx++;
	}
	subarrtemp[idx] = '\0';
	return (subarrtemp);
}

static int	ft_writesubarr(char **returnstr, char *str, char c)
{
	int	idx;

	idx = 0;
	while (*str && *str == c)
		str++;
	while (*str)
	{
		returnstr[idx] = ft_copysubarr(str, c);
		if (!returnstr[idx])
		{
			ft_tofree(returnstr, idx);
			return (0);
		}
		idx++;
		while (*str != c && *str)
			str++;
		while (*str && *str == c)
			str++;
	}
	return (1);
}

static	int	ft_wordcount(char const *str, char c)
{
	int	idx;
	int	wcount;

	idx = 0;
	wcount = 0;
	if (!str)
		return (0);
	while (str[idx])
	{
		if (str[idx] != c && str[idx])
			wcount++;
		while (str[idx] != c && str[idx + 1])
			idx++;
		idx++;
	}
	return (wcount);
}

char	**ft_split(char const *str, char c)
{
	int		endofres;
	char	**result;
	int		b;

	if (!str)
		return (NULL);
	endofres = ft_wordcount(str, c);
	result = malloc (sizeof(char *) * (endofres + 1));
	if (!result)
		return (NULL);
	b = ft_writesubarr(result, (char *)str, c);
	if (!b)
		return (0);
	result[endofres] = NULL;
	return (result);
}
