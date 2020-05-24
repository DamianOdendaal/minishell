/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 14:56:01 by marvin            #+#    #+#             */
/*   Updated: 2020/05/24 15:34:36 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/minishell.h"


int main(int ac, char **av, char **env)
{
    char *search_value;
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
    search_value = inside_env(global_env, tester);
    ft_putstr(search_value);



    
   
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
