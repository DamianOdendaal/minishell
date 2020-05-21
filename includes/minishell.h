/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 14:56:19 by marvin            #+#    #+#             */
/*   Updated: 2020/05/21 22:03:46 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# include <unistd.h>
# include <stdlib.h>
# include <dirent.h>
# include <stdio.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <grp.h>
# include <pwd.h>
# include <time.h>
# include <errno.h>
# include "../libft/libft.h"


# define DIR_NOTEXIST	("No such file or directory.")
# define DIR_NOTDIR		("Error opening directory.")
# define DIR_NOPERM		("Permission denied.")
# define DODO           ("")



char            **global_env; 

char            **argument_split(char *arg, char delim);
int             argument_position(char **arg, char *to_find);
void	        print_env(char **env);
void            store_env(char **env, char **our_env);
size_t	        env_len(char **env);
char            *inside_env(char **env, char *find_me);




#endif