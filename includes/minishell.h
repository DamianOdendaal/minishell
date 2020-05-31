/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 14:56:19 by marvin            #+#    #+#             */
/*   Updated: 2020/05/31 13:04:06 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# include <readline/readline.h>
# include <readline/history.h>
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


# define NOTEXIST	("No such file or directory.")
# define NOTDIR		("Error opening directory.")
# define NOPERM		("minishell: permission denied: ")

# define DODO       ("")
# define OUTOFHERE  ("cd")
# define CLOSE      ("exit")
# define ENV        ("env")
# define GIMMIEWORDS  ("unsetenv")
# define TAKEHERE  ("setenv")
# define ECHO  ("echo")

    

char            **global_env; 



void			ft_puterror(char *path, char *str);
int				change_dir(char *path, int print, size_t path_size);
int		        too_many_args(char **command_string);
int				ft_cd(char **command_string, int print);
int		        command_execution(char **coms);
int             ft_echo(char **command_arr);
void		    print_env(char **env);
size_t		    env_len(char **env);
void            store_env(char **env, char **our_env);
int             ft_find_index(char **search_me, char *compare_me,  char stop_here);
size_t		    env_len_on_steroids(char **env);
char            *get_var(char **search_me, char *compare_me,  char stop_here);
void            free_array(char **arr);
int		        ft_executable(char **com, char *bin, struct stat info);
int             builtin_check(char *command_string);
int				exec_path(char *path, char **command_string);
int		        exec_builtin(char **com);
int				exec_command(char **com);
int             ft_find(char *search_me, char *compare_me,  char stop_here);
char	        *find_path_var(char **command_string);
char			*input_manager(char *str);
char		    *ft_if_home(char *path);
char			*handle_prompt(size_t path_len);
void		    add_var(char *key, char *value);
int             ft_setenv(const char *name, const char *value);
int				set_env_var(char *key, char *value);
int             exists_within(char *find_me, char *search_me);
int		        unset_env(char *key);
void			zsh_level(void);







#endif