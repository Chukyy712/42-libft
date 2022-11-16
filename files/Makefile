# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brcaetan <brcaetan@42lisboa.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 12:59:32 by brcaetan          #+#    #+#              #
#    Updated: 2022/11/16 09:46:33 by brcaetan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

#Compiler + Flags 
# -I (include) Specifies a directory dir to search for included makefiles.
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = ft_atoi.c ft_isprint.c ft_memset.c\
ft_strlcpy.c ft_strrchr.c ft_bzero.c ft_calloc.c\
ft_itoa.c ft_strlen.c ft_strtrim.c ft_isalnum.c\
ft_memchr.c ft_strchr.c ft_substr.c ft_isalpha.c\
ft_memcmp.c ft_strdup.c ft_striteri.c ft_tolower.c\
ft_isascii.c ft_memcpy.c ft_strjoin.c ft_strncmp.c\
ft_toupper.c ft_isdigit.c ft_memmove.c ft_strlcat.c\
ft_strnstr.c ft_split.c ft_strmapi.c ft_putchar_fd.c\
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

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