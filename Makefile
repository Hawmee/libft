# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: varandri <varandri@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/26 16:13:49 by varandri          #+#    #+#              #
#    Updated: 2026/01/27 15:17:27 by varandri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
EXEC = a.out
CC = cc
CFLAGS = -Wall -Werror -Werror

HEADERS = libft.h

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ) $(HEADERS)
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean : clean 
	rm -f $(NAME)

re : fclean $(NAME)

norme : 
	@norminette -R CheckDefine $(HEADERS)
	@norminette -R CheckForbidden $(SRCS)

.PHONY:  all clean fclean re