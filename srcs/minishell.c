/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 09:26:23 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/04 16:43:50 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int		main(int ac, char **av, char **env)
{
	int		loop;
	char	*input_data;
	char	**commands;
	int		some_index;

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

		some_index = ft_strchr_index(input_data, '"');
		if (input_data[some_index - 1] == 92)
			input_data = ft_forgot_quote(input_data, '"');
	
	
		if (ft_notempty(input_data))
			{
				add_history(input_data);
				commands = ft_strsplit(input_data, ';');
				free(input_data);
				loop = ft_exec_args(commands);
				array_free(commands);
			}
	}
	array_free(global_env);
}
