/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 14:56:19 by marvin            #+#    #+#             */
/*   Updated: 2020/06/02 19:42:49 by groovyswa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef	 MINISHELL_H
# define	 MINISHELL_H

#include <unistd.h>
#include <stdlib.h>
#include <dirent.h>
#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <signal.h>
#include <sys/wait.h> 
#include <sys/stat.h>
#include <sys/types.h>
#include <grp.h>
#include <pwd.h>
#include <time.h>
#include <errno.h>
#include "../libft/libft.h"


# define NOTEXIST	("No such file or directory.")
# define NOTDIR		("Error opening directory.")
# define NOPERM		("minishell: permission denied: ")
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
void	exec_path(char *path);
void	exec_env(char **cmd);
int		exec_cd(char **cmd);
int		exec_tilda(char **cmd);
int	    exec_help(void);
int	    exec_author(void);
int	    exec_echo(char **cmd);
void	pop_env(char **env);
int		reset_env(char *key, char *value);
int		print_env(char **cmd);
int		set_env(char **cmd);
int		unset_env(char **cmd);
void	error_found(char *path, char *cmd);
int		error_params(char **cmd, int i);
int		check_sys(char **cmd);
char	**remove_quotes(char *str);
int		execute_args(char **cmds);
void	handle_sigint(int sig);
char	*do_path(char *bin, char *com);
char	*get_path(char *com);
void	print_path(void);
void	proc_signal_handler(int signo);
int		sys_call(char **cmd, char *path);
int		exec_sys(char **cmd);
void	free_her(char **str);
char	*get_env(char *str);
char	*end_quote(char *str, char q);
void	zsh_level(void);
int		preform_set(char **temp, char **cmd);

#endif
