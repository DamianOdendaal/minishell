/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 14:56:19 by marvin            #+#    #+#             */
/*   Updated: 2020/06/03 17:33:18 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# include <unistd.h>
# include <stdlib.h>
# include <dirent.h>
# include <stdio.h>
# include <readline/readline.h>
# include <readline/history.h>
# include <signal.h>
# include <sys/wait.h> 
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
# define CANTFORK   ("minishell: unable to fork process:")
# define EXISTS(x)  (x != '\0')
# define NOSPACE(x) (x != ' ')

# define DODO       ("")
# define OUTOFHERE  ("cd")
# define CLOSE      ("exit")
# define ENV        ("env")
# define GIMMIEWORDS  ("unsetenv")
# define TAKEHERE  ("setenv")
# define ECHO  ("echo")

    
char            **global_env;
void	exec_prev(void);
void	ft_change_path(char *path);
void	ft_path_inside(char **command_array);
int		ft_cd(char **cmd);
int		ft_handle_tildar(char **command_array);
int	    ft_help_cmd(void);
int	    ft_authors(void);
int	    ft_echo(char **cmd);
void	store_env(char **env);
int		update_env(char *key, char *value);
int		print_env(char **cmd);
int		set_env(char **cmd);
int		unset_env(char **cmd);
void	error_found(char *path, char *cmd);
int		error_params(char **cmd, int i);
int		ft_is_builtin(char **cmd);
char	**ft_get_content(char *str);
int		ft_exec_args(char **command_strings);
void	handle_sigint(int sig);
char	*get_bin(char *bin, char *com);
char	*get_path(char *com);
void	prompt_path(void);
void	proc_signal_handler(int signo);
int		sys_call(char **cmd, char *path);
int		system_command(char **cmd);
void	array_free(char **str);
char	*get_env(char *str);
char	*ft_forgot_quote(char *str, char quote);
void	zsh_level(void);
int		ft_insert_var(char **temp, char **cmd);
void	vote_for_pedro(char *left_man, char *right_man, char *middle_man, char *another_man);
int 	ft_notempty(char *str);


#endif
