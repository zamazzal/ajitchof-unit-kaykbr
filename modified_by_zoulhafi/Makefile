# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/02 01:44:17 by zoulhafi          #+#    #+#              #
#    Updated: 2018/12/02 04:03:25 by zoulhafi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libunit.a

PATH_FRAMEWORK = framework

_SRC = clean_test.c launch.c load_test.c print_endl.c print_nbr.c print_str.c

SRC = $(patsubst %.c, $(PATH_FRAMEWORK)/%.c, $(_SRC))

OBJ = $(patsubst %.c, %.o, $(_SRC))

FLAG = -Wall -Wextra -Werror

all: $(NAME)
	
$(NAME) : $(PATH_FRAMEWORK)/libunit.h
	gcc $(FLAG) -c $(SRC) -I $(PATH_FRAMEWORK)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -Rf $(OBJ)

fclean: clean
	rm -Rf $(NAME)

re: fclean all
