/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pipex.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/28 13:20:55 by dtran         #+#    #+#                 */
/*   Updated: 2022/04/06 17:43:48 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <libft.h>

typedef struct s_varlist
{
	char	**commands;
	char	*correct_path;
	char	**split_paths;
	int		argc;
	int		argv_idx;
	int		in;
	int		out;
}	t_varlist;

void	pexit(char *str, int exitcode);
void	get_path_envp(t_varlist *vars, char *envp[]);
void	correct_path(t_varlist *vars, char *envp[]);

#endif