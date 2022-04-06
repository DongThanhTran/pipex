/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/27 16:33:31 by dtran         #+#    #+#                 */
/*   Updated: 2021/11/16 16:28:27 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst -> next;
	}
	return (NULL);
}

// COMMENTS:

// return (lst);
// return de pointer die naar NULL wijst.

// return (NULL);
// dit is daadwerkelijk NULL returnen
