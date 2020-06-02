/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 09:26:23 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/02 17:10:05 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int		main(int ac, char **av, char **env)
{
	int		i;
	char	*line;
	char	**commands;

	(void)ac;
	(void)av;
	i = 1;
	pop_env(env);
	zsh_level();
	while (i)
	{
		print_path();
		signal(SIGINT, handle_sigint);
		line = readline(" ");
		if (ft_strchr(line, '"') != NULL)
			line = end_quote(line, '"');

		else if (ft_strchr(line, '\'') != NULL)
			line = end_quote(line, '\'');

		add_history(line);
		commands = ft_strsplit(line, ';');
		free(line);
		i = execute_args(commands);
		free_her(commands);
	}
	free_her(global_env);
}
