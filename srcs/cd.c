/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 19:01:24 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/24 21:02:00 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"



void			ft_puterror(char *path, char *str)
{
    ft_strcat(str, path);
	ft_putendl(str);
}

// print is there to help if the taken in param is - so that we can
// print where we were before

int				change_dir(char *path, int print, size_t path_size)
{
    
	char	cwd_path[path_size + 1];

	getcwd(cwd_path, path_size);
	if (chdir(path) == 0)
	{
		ft_setenv("OLDPWD", cwd_path);
		if (print)
			ft_putendl(path);
		getcwd(cwd_path, path_size);
		ft_setenv("PWD", cwd_path);
		return (0);
	}
	else
	{
		if (access(path, 0) == -1)
			ft_puterror(path, "cd: no such file or directory: ");
		else if (access(path, 1) == -1)
			ft_puterror(path, "cd: permission denied: ");
		return (1);
	}
}

static int		too_many_args(char **command_string)
{
    size_t len;

    len = env_len(command_string);
    // cant have more than 2 args here
	if (len > 2)
	{
		ft_putstr("cd: too many arguments\n");
		return (1);
	}
	return (0);
}

int				ft_cd(char **command_string, int print)
{
    size_t path_len;
    char *path;

    path_len = env_len_on_steroids(global_env);
    path = get_var(global_env, "HOME", '=');

	if ((!command_string[1] && ft_strequ("cd", command_string[0])) || ft_strequ(command_string[1], "--"))
		return (change_dir(path, 0, path_len));
        
	else if (ft_strequ(command_string[1], "-"))
		return (change_dir(path, 1, path_len));

	else
	{
		if (too_many_args(command_string))
			return (1);
		return (change_dir(command_string[1], print, path_len));
	}
}