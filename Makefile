# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brcaetan <brcaetan@42lisboa.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 12:59:32 by brcaetan          #+#    #+#              #
#    Updated: 2022/11/07 12:59:47 by brcaetan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

#Compiler + Flags 
# -I (include) Specifies a directory dir to search for included makefiles.
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = $(wildcard *.c)

#Object files
OBJ = $(SRC:.c=.o)

B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

B_OBJ =	$(B:.c=.o)

all:	$(NAME)

bonus:	$(B_OBJ)
			ar rcs $(NAME) $(B_OBJ)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ) $(B_OBJ)

fclean:	clean
			$(RM) $(NAME)

re:	fclean $(NAME)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)