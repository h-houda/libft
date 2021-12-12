# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hhouda <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 13:34:57 by hhouda            #+#    #+#              #
#    Updated: 2021/12/10 14:21:21 by hhouda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_atoi.c ft_isprint.c ft_strcpy.c ft_strrchr.c ft_bzero.c ft_memchr.c ft_strdup.c ft_substr.c ft_calloc.c ft_memcmp.c ft_strlcat.c ft_tolower.c ft_isalnum.c ft_memcpy.c ft_strlcpy.c ft_toupper.c ft_isalpha.c ft_memmove.c ft_strlen.c ft_isascii.c ft_memset.c ft_strncmp.c ft_isdigit.c ft_strchr.c ft_strnstr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCS_BONUS 	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c 

OBJS		= $(SRCS:.c=.o)

OBJS_BONUS	= $(SRCS_BONUS:.c=.o)

CC		= gcc

CFLAGS		= -Wall -Wextra -Werror

HDRS		= libft.h

RM			= rm -f

NAME		= libft.a

all:		$(NAME)

$(NAME):	$(OBJS) $(HDRS)
			ar rc $(NAME) $(OBJS)

bonus :		$(OBJS_BONUS) $(HDRS)
			ar rc $(NAME) $(OBJS_BONUS)

%.o: %.c $(HDRS)
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus
