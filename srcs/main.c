/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 14:56:01 by marvin            #+#    #+#             */
/*   Updated: 2020/05/20 20:15:46 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/minishell.h"


int main(int ac, char **av, char **env)
{
    char **test;
    test = (char **)malloc(sizeof(char *) * env_len(env));
    (void)ac;
    (void)av;
    // print_env(env);
    store_env(env, test);
    sleep(0);
    return (0);
}