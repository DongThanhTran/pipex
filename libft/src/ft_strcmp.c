/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/16 20:23:37 by dtran         #+#    #+#                 */
/*   Updated: 2021/11/16 20:53:39 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *str1, const char *str2)
{
	int	idx;

	idx = 0;
	while (str1[idx] == str2[idx] && str1[idx] && str2[idx])
	{
		idx++;
	}
	return ((unsigned char)str1[idx] - (unsigned char)str2[idx]);
}
