/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pipex.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/29 15:28:37 by dtran         #+#    #+#                 */
/*   Updated: 2022/04/06 16:01:18 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static void	exec(t_varlist *vars, char *argv[], char *envp[])
{
	vars->commands = ft_split(argv[vars->argv_idx + 1], ' ');
	if (!vars->commands)
		pexit("Command not found", 127);
	correct_path(vars, envp);
	if (execve(vars->correct_path, vars->commands, envp) < 0)
		pexit("Command not found", 127);
}

static void	ft_fork(t_varlist *vars, char *argv[], char *envp[])
{
	int		end[2];
	pid_t	forkvalue;

	if (pipe(end) == -1)
		pexit("Failed to pipe", 1);
	forkvalue = fork();
	if (forkvalue == -1)
		pexit("Failed to create fork", 1);
	if (forkvalue == 0)
	{
		close(end[0]);
		if (dup2(end[1], STDOUT_FILENO) == -1)
			pexit("Failed to dup2 end[1]", 1);
		exec(vars, argv, envp);
	}
	else
	{
		close(end[1]);
		if (dup2(end[0], STDIN_FILENO) == -1)
			pexit("Failed to dup2 end[0]", 1);
	}
	close(end[0]);
	close(end[1]);
}

static void	manager(t_varlist *vars, char *argv[], char *envp[])
{
	vars->argv_idx = 1;
	if (dup2(vars->in, STDIN_FILENO) == -1)
		pexit("Failed to dup2 infile", 1);
	if (dup2(vars->out, STDOUT_FILENO) == -1)
		pexit("Failed to dup2 outfile", 1);
	while (vars->argv_idx < vars->argc - 3)
	{
		ft_fork(vars, argv, envp);
		vars->argv_idx++;
	}
	exec(vars, argv, envp);
}

int	main(int argc, char *argv[], char *envp[])
{
	t_varlist	vars;

	if (argc < 5)
		pexit("Too few arguments", 1);
	vars.argc = argc;
	vars.in = open(argv[1], O_RDONLY, 0644);
	if (vars.in < 0)
		pexit(argv[1], 1);
	vars.out = open(argv[vars.argc - 1], O_CREAT | O_RDWR | O_TRUNC, 0644);
	if (vars.out < 0)
		pexit(argv[vars.argc - 1], 1);
	get_path_envp(&vars, envp);
	manager(&vars, argv, envp);
	close(vars.in);
	close(vars.out);
	exit (EXIT_SUCCESS);
}
