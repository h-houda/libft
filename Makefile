SRCS		= ft_atoi.c ft_isprint.c ft_strcpy.c ft_strrchr.c ft_bzero.c ft_memchr.c ft_strdup.c ft_substr.c ft_calloc.c ft_memcmp.c ft_strlcat.c ft_tolower.c ft_isalnum.c ft_memcpy.c ft_strlcpy.c ft_toupper.c ft_isalpha.c ft_memmove.c ft_strlen.c ft_isascii.c ft_memset.c ft_strncmp.c ft_isdigit.c ft_strchr.c ft_strnstr.c ft_strjoin.c 

OBJS		= $(SRCS:.c=.o)

CC		= gcc

CFLAGS		= -Wall -Wextra -Werror

HDRS		= libft.h

RM			= rm -f

NAME		= libft.a

%.o: %.c $(HDRS)
	$(CC) -c -o $@ $< $(CFLAGS)


all:		$(NAME)

$(NAME):	$(OBJS) $(HDRS)
			ar rc $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
