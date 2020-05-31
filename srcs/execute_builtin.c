/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_builtin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 23:33:42 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/27 19:45:36 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


int		ft_executable(char **com, char *bin, struct stat info)
{
	if (S_ISREG(info.st_mode))
	{
		if (info.st_mode & S_IXUSR)
			return (exec_path(bin, com));
		else
            ft_3t_printer(NOPERM, bin, "\n");
		ft_return_free(bin , 1);
	}
	ft_return_free(bin , 1);

}

int builtin_check(char *command_string)
{
    if (command_string == OUTOFHERE)
        return (1);
    else if (command_string == CLOSE)
        return (1);
    else if (command_string == ENV)
        return (1);
    else if (command_string == GIMMIEWORDS)
        return (1);
    else if (command_string == TAKEHERE)
        return (1);
    else if (command_string == ECHO)
        return (1);
   return (0); 
}




int				exec_path(char *path, char **command_string)
{
	pid_t	pid;

	pid = fork();
	if (pid == 0)
		execve(path, command_string, global_env);
        
	else if (pid < 0)
	{
		ft_putendl("minishell: fork: process creation failed!");
        ft_return_free(path , 1);
	}
	free(path);
	wait(&pid);
	return (0);
}



static int		exec_builtin(char **com)
{
	if (ft_strcmp("cd", com[0]) == 0)
		return (cd_b(com, 0));
	else if (ft_strcmp("env", com[0]) == 0)
		return (env_b());
	else if (ft_strcmp("exit", com[0]) == 0)
		return (-1);
	else if (ft_strcmp("setenv", com[0]) == 0)
		return (setenv_b(com));
	else if (ft_strcmp("unsetenv", com[0]) == 0)
		return (unsetenv_b(com));
	else if (ft_strcmp("echo", com[0]) == 0)
		return (echo_b(com));
	return (1);
}

int				exec_command(char **com)
{
	char			*path;
	struct stat		info;

	if (!com || !*com)
		return (1);
	if (is_builtin(com[0]))
		return (exec_builtin(com));
	else if ((path = in_path(com)))
	{
		lstat(path, &info);
		return (is_executable(com, path, info));
	}
	if (lstat(com[0], &info) != -1)
	{
		if (S_ISREG(info.st_mode))
			return (is_executable(com, ft_strdup(com[0]), info));
		else if (S_ISDIR(info.st_mode))
        //TODO: comeback and fix this error in change dir
			return (change_dir(com[0], 0));
	}
	ft_putstr("minishell: command not found: ");
	ft_putendl(com[0]);
	return (1);
}