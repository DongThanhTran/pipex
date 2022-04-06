/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 15:24:07 by dtran         #+#    #+#                 */
/*   Updated: 2021/11/16 19:48:12 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	int	idx;

	idx = 0;
	if (!str)
		return ;
	while (str[idx])
	{
		(*f)(idx, &str[idx]);
		idx++;
	}
}
