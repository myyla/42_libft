# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 16:42:31 by amtouham          #+#    #+#              #
#    Updated: 2022/11/11 19:59:02 by amtouham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
FLAGS =  -Wall -Werror -Wextra
CFILES = ft_isalpha.c  ft_isdigit.c ft_isalnum.c ft_strlen.c ft_isascii.c ft_isprint.c ft_toupper.c \
		    ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memset.c ft_memcpy.c ft_memmove.c  \
		    ft_bzero.c ft_atoi.c ft_memchr.c ft_memcmp.c ft_strlcpy.c ft_strlcat.c ft_calloc.c ft_strdup.c \
		    ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c  ft_strnstr.c ft_putchar_fd.c ft_putstr_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c ft_strjoin.c 
BO_CFILES = ft_lstadd_back.c ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstadd_front.c ft_lstdelone.c # ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJ_FILES = ${CFILES:.c=.o}
BO_OBJ = ${BO_CFILES:.c=.o}

all : ${NAME}

${NAME} : ${OBJ_FILES}
	ar -crs ${NAME} ${OBJ_FILES}
	
bonus : ${BO_OBJ}
	ar -crs ${NAME} ${BO_OBJ}

%.o:%.c libft.h
	${CC} -c ${FLAGS} $<

clean :
	rm -f ${OBJ_FILES} ${BO_OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all bonus

.PHONY: clean fclean re all