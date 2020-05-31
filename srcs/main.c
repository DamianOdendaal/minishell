/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 14:56:01 by marvin            #+#    #+#             */
/*   Updated: 2020/05/25 21:02:20 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/minishell.h"


int				main(int ac, char *av[], char *env[])
{
    // we gonna need to get the full env len here and pass into prompt
	char	*line;
	char	*prompt;
	char	**command_string;
	char	*incoming_string;
    size_t  full_length;

	// initialize_env(env);
    store_env(env, global_env);
    full_length = env_len_on_steroids(global_env);
	zsh_level();

	while (TRUE)
	{

		prompt = handle_prompt(full_length);
        // read on readline again
		incoming_string = readline(prompt);

		line = input_manager(incoming_string);

		ft_strdel(&prompt);
        
		command_string = ft_strsplit(line, ';');

		free(line);

		if (command_execution(command_string) == -1)
			break ;
	}

	return (0);
}