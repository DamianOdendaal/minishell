# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/10 14:56:05 by marvin            #+#    #+#              #
#    Updated: 2020/06/02 17:26:28 by dodendaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell
LIBFT_DIR = libft
LIBFT_CFILES = libft/%.c
SRCS_D = srcs
OBJS_D = objs
LIBFT_LIB = -L $(LIBFT_DIR) -lft
HEADERS = -I./includes -I./$(LIBFT_DIR)
CFLAGS = -Wall -Werror -Wextra $(HEADERS)
CC = gcc -g
SOURCES = cd.c ft_authors.c echo.c errors.c minishell.c \
			print_path.c sys.c ft_insert_var.c ft_help.c ft_show_prev.c ft_change_path.c\
			ft_handle_tildar.c ft_path_inside.c ft_store_env.c \
			ft_update_env.c print_env.c setenv.c unsetenv.c ft_isbuiltin.c \
			ft_remove_qoutes.c ft_exec_args.c ft_process_interupt.c \
			ft_do_path.c process_handler.c ft_sys_call.c ft_free_stuff.c \
			ft_get_env.c ft_forgot_quote.c 

OBJECTS = $(addprefix $(OBJS_D)/,$(SOURCES:.c=.o))

$(OBJS_D)/%.o: $(SRCS_D)/%.c libft/libft.h includes/*
	@echo "\033[1;35;m[Compiling $<] \t\033[0m"
	@$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): dir $(OBJECTS)
	@make -C $(LIBFT_DIR)
	@$(CC)  $(CFLAGS) -o $(NAME) $(OBJECTS) $(LIBFT_LIB) $(HEADERS) -lreadline
	@echo "\033[1;32;m minishell ready to use! \t\033[0m"

all: dir $(NAME)

dir:
	@mkdir -p $(OBJS_D)

clean:
	@echo "\033[1;34;m[Cleaning $<] \t\033[0m"
	@rm -rf $(OBJECTS)
	@make -C $(LIBFT_DIR) clean

fclean: clean
	@echo "\033[1;34;m[Force $<] \t\033[0m"
	@rm -rf $(OBJS_D)
	@rm -rf $(NAME)

re: fclean clean all
	
.PHONY: fclean clean all re