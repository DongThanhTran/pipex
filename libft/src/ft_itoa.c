/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 15:23:22 by dtran         #+#    #+#                 */
/*   Updated: 2021/11/22 16:40:42 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_edgecase(int num)
{
	char	*ptr;

	ptr = 0;
	if (num == -2147483648)
		ptr = ft_strdup("-2147483648");
	if (num == 0)
		ptr = ft_strdup("0");
	return (ptr);
}

char	*ft_itoa(int num)
{
	char	*ptr;
	int		len;

	len = ft_intlen(num);
	if (num == -2147483648 || num == 0)
		return (ft_edgecase(num));
	ptr = malloc ((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	len--;
	if (num < 0)
	{
		ptr[0] = '-';
		num = -num;
	}
	while (num)
	{
		ptr[len] = num % 10 + '0';
		len--;
		num = num / 10;
	}
	return (ptr);
}

// COMMENTS:

// 	ptr[len] = '\0';// ptr[len] is at the end of ptr that's why you add \0
