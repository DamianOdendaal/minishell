/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 14:56:01 by marvin            #+#    #+#             */
/*   Updated: 2020/05/23 01:51:27 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/minishell.h"


int main(int ac, char **av, char **env)
{
    // char *search_value;
    (void)ac;
    (void)av;
     (void)env;
    // size_t length;
    
    // length = env_len(env);

    char str1[] = "Hello World!";
    size_t len = ft_len_till(str1, ' ');
    char *str;
    // str = (char *)malloc(sizeof(char) * len + 1);
    str = ft_copy_till(str1, ' ');
    printf("%s\n", str);
    printf("%ld\n", len);


    // global_env = (char **)malloc(sizeof(char *) * length + 1);
    // store_env(env, global_env);
    // char *tester = ft_strndup(global_env[2], 9);
    // search_value = inside_env(global_env, tester);
    
    // if (search_value == DODO)
        // ft_putstr(search_value);
  
    // else
        // ft_putchar('k');


    
    // print_env(test);
    // free(test);
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
