# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/22 16:59:05 by pcardoso          #+#    #+#              #
#    Updated: 2020/01/29 17:35:15 by pcardoso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS += ft_memset.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		   ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
		   ft_strchr.c ft_strrchr.c ft_strnstr.c \
		   ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		   ft_toupper.c ft_tolower.c ft_strdup.c
SRCS += ft_substr.c ft_strjoin.c ft_strtrim.c ft_bzero.c ft_atoi.c \
		   ft_putchar_fd.c ft_putstr_fd.c ft_strcmp.c ft_split.c ft_calloc.c ft_putnbr_fd.c

OBJS += ft_memset.o ft_memcpy.o ft_memccpy.o ft_memmove.o \
		   ft_memchr.o ft_memcmp.o ft_strlen.o ft_strlcpy.o ft_strlcat.o \
		   ft_strchr.o ft_strrchr.o ft_strnstr.o \
		   ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o \
		   ft_toupper.o ft_tolower.o ft_strdup.o
OBJS += ft_substr.o ft_strjoin.o ft_strtrim.o ft_bzero.o ft_atoi.o \
		   ft_putchar_fd.o ft_putstr_fd.o ft_strcmp.o ft_split.o ft_calloc.o ft_putnbr_fd.o

NAME	= libft.a

CC		= gcc

AR		= ar rc

RM		= rm -f

FLAGS	= -Wall -Wextra -Werror -c

B_FILES_C += ft_lstadd_front.c ft_lstsize.c \
			 ft_lstadd_back.c ft_lstdelone.c \
			 ft_lstclear.c

B_FILES_O += ft_lstadd_front.o ft_lstsize.o \
			 ft_lstadd_back.o ft_lstdelone.o \
			 ft_lstclear.o

all:		$(NAME)

$(NAME):	$(OBJS)
				$(AR) ${NAME} ${OBJS}
				ranlib ${NAME}

bonus: 		$(B_FILES_C) $(B_FILES_O)
				$(AR) $(NAME) $(B_FILES_O)
				ranlib $(NAME)

$(B_FILES_O):
				$(CC) $(FLAGS) $(B_FILES_C)

$(OBJS):
				$(CC) $(FLAGS) $(SRCS)

clean:
				${RM} ${OBJS}
				${RM} ${B_FILES_O}
				${RM} libft.h.gch

fclean:		clean
				${RM} ${NAME}

re: 		fclean all
