# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/10 14:56:05 by marvin            #+#    #+#              #
#    Updated: 2020/06/03 02:00:16 by groovyswa        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell

LIBFT_PATH = ./libft/

SRC_PATH = ./srcs/

SRCS = 	cd.c \
		ft_authors.c \
		echo.c \
		errors.c \
		minishell.c \
		print_path.c \
		sys.c \
		ft_insert_var.c \
		ft_help.c \
		ft_show_prev.c \
		ft_change_path.c \
		ft_handle_tildar.c \
		ft_path_inside.c \
		ft_store_env.c \
		ft_update_env.c \
		print_env.c \
		setenv.c \
		unsetenv.c \
		ft_isbuiltin.c \
		ft_remove_qoutes.c \
		ft_exec_args.c \
		ft_process_interupt.c \
		ft_do_path.c \
		process_handler.c \
		ft_sys_call.c \
		ft_free_stuff.c \
		ft_get_env.c \
		ft_forgot_quote.c \
		zsh_level.c \
		ft_fetch_path.c \

FLAGS = -Wall -Werror -Wextra

INC = -I ./includes/minishell.h -I $(LIBFT_PATH)libft.h

SRC = $(addprefix $(SRC_PATH), $(SRCS))

SRCO = $(patsubst %.c, %.o, $(SRC))

all : $(NAME) 

$(NAME) : $(SRCO)
		@make -C $(LIBFT_PATH)
		@gcc $(FLAGS) -o $(NAME) $(SRC) $(LIBFT_PATH)libft.a -lreadline
		@echo "\033[1;32;m minishell ready to use! \t\033[0m"

$(SRC_PATH)%.o: $(SRC_PATH)%.c
		@gcc $(FLAGS) -c $< -o $@
				 
clean:
		@make -C $(LIBFT_PATH)/ clean
		@/bin/rm -rf $(SRCO)
		@echo "\033[1;34;m[Cleaning] \t\033[0m"

fclean:
		@make -C $(LIBFT_PATH)/ fclean
		@/bin/rm -rf $(NAME)
		@echo "\033[1;34;m[Removing exacutable] \t\033[0m"

re: fclean all
	
.PHONY: all fclean clean re
