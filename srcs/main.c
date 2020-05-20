/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 14:56:01 by marvin            #+#    #+#             */
/*   Updated: 2020/05/20 22:07:09 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/minishell.h"


int main(int ac, char **av, char **env)
{
    // char **test;
    (void)ac;
    (void)av;
    (void)env;
    // size_t length;
    
    // length = env_len(env);

    // test = (char **)malloc(sizeof(char *) * (length + 1));
    // store_env(env, test);
    // print_env(test);
    // free(test);
    char str[] = "HOME";
    char str2[] = "HOME=THISISATEST";

    char *theTruth;

    theTruth = ft_strstr(str, str2);
    ft_putstr(theTruth);

    return (0);
}


// From the bash man page:

// SHLVL Incremented by one each time an instance of bash is started.
// As you see, this variable is unrelated to the fact whether it is a login shell or not. It just means that your bash shell has been started by another bash shell. Since we don't know what exactly you are doing to get your shell, I can't say why you have a nested shell invocation, but here are a few common cases:
// You are starting a new terminal window from the command line
// You are using some OS feature to start a new terminal window, and this feature is implemented by starting a bash first which then runs the terminal which then in turn runs a new shell
// You have a recursive bash call in your .bash_profile which is run whenever SHLVL equals 1 (this sounds weird, but I have seen this already twice!)