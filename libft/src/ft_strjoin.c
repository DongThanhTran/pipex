/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 15:24:10 by dtran         #+#    #+#                 */
/*   Updated: 2021/11/16 19:49:07 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*str3;
	int		idx1;
	int		idx2;

	idx1 = 0;
	idx2 = 0;
	if (!str1 || !str2)
		return (0);
	str3 = malloc((ft_strlen(str1) + ft_strlen(str2) + 1) * sizeof(char));
	if (!str3)
		return (0);
	while (str1[idx1] != '\0')
	{
		str3[idx1] = str1[idx1];
		idx1++;
	}
	while (str2[idx2] != '\0')
	{
		str3[idx1] = str2[idx2];
		idx1++;
		idx2++;
	}
	str3[idx1] = '\0';
	return (str3);
}
