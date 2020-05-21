/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 14:56:01 by marvin            #+#    #+#             */
/*   Updated: 2020/05/21 21:14:30 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/minishell.h"


int main(int ac, char **av, char **env)
{
    char **test;
    char *search_value;
    (void)ac;
    (void)av;
   
    size_t length;
    
    length = env_len(env);

    char tester[] = "SHELLk";

    test = (char **)malloc(sizeof(char *) * (length + 1));
    store_env(env, test);
    if (!(search_value = inside_env(test, tester)))
    {
        ft_putchar('k');
    }
  
    ft_putstr(search_value);


    
    // print_env(test);
    free(test);
    return (0);
}



// int main(int ac, char **av, char **env)
// {
//     char **test;
//     (void)ac;
//     (void)av;
//     (void)env;
   
//     char str[] = "hello this is a string i wanna split";
//     char delim = ' ';
//     test = argument_split(str, delim);

//     int index = 0;
//     while (test[index] )
//     {
//         ft_putstr(test[index]);
//         index++;
//     }
   

//     return (0);
// }
