/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 09:26:23 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/03 17:30:27 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int		main(int ac, char **av, char **env)
{
	int		loop;
	char	*input_data;
	char	**commands;

	(void)ac;
	(void)av;
	loop = 1;
	store_env(env);
	zsh_level();
	while (loop)
	{
		prompt_path();
		signal(SIGINT, handle_sigint);
		input_data = readline(" ✗ ");
		if (ft_strchr(input_data, '"') != NULL)
			input_data = ft_forgot_quote(input_data, '"');

		// do the check for if someone passes \"
		else if (ft_strchr(input_data, '\'') != NULL)
			input_data = ft_forgot_quote(input_data, '\'');

		add_history(input_data);
		commands = ft_strsplit(input_data, ';');
		free(input_data);
		loop = ft_exec_args(commands);
		array_free(commands);
	}
	array_free(global_env);
}
