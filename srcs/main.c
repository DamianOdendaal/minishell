/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 14:56:01 by marvin            #+#    #+#             */
/*   Updated: 2020/05/24 22:26:16 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/minishell.h"


int main(int ac, char **av, char **env)
{
    (void)ac;
    (void)av;
    size_t length;
    
    length = env_len(env);
    // char str1[] = "Hello World!";
    // char *str;
    // str = ft_copy_till(str1, ' ');
    // printf("%s\n", str);
    // char *new = ft_strjoin(str, "=");
    // printf("%s\n", new);
    // free(str);
    // free(new);
    global_env = (char **)malloc(sizeof(char *) * length + 1);
    store_env(env, global_env);
    // print_env(global_env);
    ft_putendl("");
    ft_putendl("");
    char tester[] = "SHELL1";
    return (0);
}







static int		exec_com(char **coms)
{
	int		i;
	int		ret;
	char	**com;

	i = 0;
	while (coms[i])
	{
		com = argsplit(ft_strdup(coms[i]));
		handle_input(com);
		ret = exec_command(com);
		ft_freestrarray(com);
		if (ret == -1)
		{
			ft_freestrarray(coms);
			return (-1);
		}
		i++;
	}
	ft_freestrarray(coms);
	return (0);
}

void			zsh_level(void)
{
	char		*temp;
	char		*lvl;

	temp = get_var(global_env, "SHLVL", '=');
	lvl = ft_itoa(ft_atoi(temp) + 1);
	ft_setenv("SHLVL", lvl);
	free(temp);
	free(lvl);
}

char			*ft_linehandler(char *str)
{
	char	*str2;
	char	*tmp;
	char	*ptr;

	ptr = str;
	while ((ptr = ft_strchr(ptr, '"')) != NULL)
	{
		++ptr;
		if ((ptr = ft_strchr(ptr, '"')) == NULL)
		{
			str2 = readline("minishell $>");
			tmp = ft_strjoin(str, "\n");
			ft_strdel(&str);
			str = ft_strjoin(tmp, str2);
			ft_strdel(&str2);
			ft_strdel(&tmp);
			ptr = str;
		}
		else
			ptr++;
	}
	return (str);
}

int				main(int ac, char *av[], char *env[])
{
    // we gonna need to get the full env len here and pass into prompt
	char	*line;
	char	*prompt;
	char	**coms;
	char	*str;
    size_t  full_length;

	// initialize_env(env);
    store_env(env, global_env);
    full_length = env_len_on_steroids(global_env);
	zsh_level();

	while (TRUE)
	{

		prompt = handle_prompt();
        // read on readline again
		str = readline(prompt);

		line = ft_linehandler(str);

		ft_strdel(&prompt);
        
		coms = ft_strsplit(line, ';');

		free(line);

		if (exec_com(coms) == -1)
			break ;
	}

	return (0);
}