NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

SRCNAME = ft_isalpha.c
SRCNAME += ft_memccpy.c
SRCNAME += ft_memset.c
SRCNAME += ft_split.c
SRCNAME += ft_strlcpy.c
SRCNAME += ft_strrchr.c
SRCNAME += ft_atoi.c
SRCNAME += ft_isascii.c
SRCNAME += ft_memchr.c
SRCNAME += ft_putchar_fd.c
SRCNAME += ft_strchr.c
SRCNAME += ft_strlen.c
SRCNAME += ft_strtrim.c
SRCNAME += ft_bzero.c
SRCNAME += ft_isdigit.c
SRCNAME += ft_memcmp.c
SRCNAME += ft_putendl_fd.c
SRCNAME += ft_strdup.c
SRCNAME += ft_strmapi.c
SRCNAME += ft_substr.c
SRCNAME += ft_calloc.c
SRCNAME += ft_isprint.c
SRCNAME += ft_memcpy.c
SRCNAME += ft_putnbr_fd.c
SRCNAME += ft_strjoin.c
SRCNAME += ft_strncmp.c
SRCNAME += ft_tolower.c
SRCNAME += ft_isalnum.c
SRCNAME += ft_itoa.c
SRCNAME += ft_memmove.c
SRCNAME += ft_putstr_fd.c
SRCNAME += ft_strlcat.c
SRCNAME += ft_strnstr.c
SRCNAME += ft_toupper.c

BONUS	= ft_lstnew.c
BONUS	+= ft_lstadd_front.c
BONUS	+= ft_lstsize.c
BONUS	+= ft_lstlast.c
BONUS	+= ft_lstlast.c
BONUS	+= ft_lstadd_back.c
BONUS	+= ft_lstdelone.c
BONUS	+= ft_lstclear.c
BONUS	+= ft_lstiter.c
BONUS	+= ft_lstmap.c
SRCS	=${SRCNAME}
OBJS	=${SRCS:.c=.o}
BONUS_OBJS	= ${BONUS:.c=.o}

.c.o:
	@${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS} ${BONUS_OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

bonus: all ${BONUS_OBJS}
	ar rc ${NAME} ${BONUS_OBJS}

.PHONY: clean fclean re all bonus
