/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/26 17:03:01 by dtran         #+#    #+#                 */
/*   Updated: 2021/11/16 16:37:37 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newelement;

	newelement = malloc (sizeof(t_list));
	if (!newelement)
		return (0);
	newelement -> content = content;
	newelement -> next = NULL;
	return (newelement);
}

// COMMENTS:

//	newelement -> input = content;
// input die je erin gooit wordt de content in de "void content"
// in de struct. dat wordt de newelement. Denk aan cat > cat.txt.

// newelement -> next = NULL;
// dit is vergelijkbaar aan '\0' in een array.

// t_list	*elem;
// elem is een pointer. als de notatie "elem -> next" dan wijst
// hij dus naar next.
// hence de "->" operator.

// return (1);
// 1 staat voor verkeerd.

// "echo $?" in shell
// output geven van je meest recente command.
