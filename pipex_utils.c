/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pipex_utils.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/29 16:38:46 by dtran         #+#    #+#                 */
/*   Updated: 2022/03/30 19:04:22 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	pexit(char *str, int exitcode)
{
	perror(str);
	exit (exitcode);
}

void	get_path_envp(t_varlist *vars, char *envp[])
{
	char	*temp;

	while (ft_strncmp("PATH=", *envp, 5) && *(envp + 1))
		envp++;
	if (ft_strncmp("PATH=", *envp, 5) != 0)
		pexit("PATH= not found", 1);
	temp = ft_strtrim(*envp, "PATH=");
	if (!temp)
		pexit("Failed to trim PATH=", 1);
	vars->split_paths = ft_split(temp, ':');
	if (!vars->split_paths)
		pexit("Failed to split pathways", 1);
	free (temp);
}

void	correct_path(t_varlist *vars, char *envp[])
{
	int		idx;
	char	*slash_add;
	char	*cmd_add;

	idx = 0;
	if (vars->correct_path)
		vars->correct_path = NULL;
	if (access(vars->commands[0], X_OK) == 0)
		vars->correct_path = ft_strdup(vars->commands[0]);
	while (vars->split_paths[idx])
	{
		slash_add = ft_strjoin(vars->split_paths[idx], "/");
		if (!slash_add)
			pexit("Failed to add slash to pathway", 1);
		cmd_add = ft_strjoin(slash_add, vars->commands[0]);
		if (!cmd_add)
			pexit("Failed to add command to pathway", 1);
		if (access(cmd_add, X_OK) == 0)
			vars->correct_path = ft_strdup(cmd_add);
		free (slash_add);
		free (cmd_add);
		idx++;
	}
	if (!vars->correct_path)
		pexit("Command not found", 127);
}
