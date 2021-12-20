# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hojang <hojang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 17:48:34 by hojang            #+#    #+#              #
#    Updated: 2021/12/20 22:06:53 by hojang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_strlen.c\
			ft_atoi.c\
			ft_bzero.c\
			ft_calloc.c\
			ft_isspace.c\
			ft_isupper.c\
			ft_islower.c\
			ft_itoa.c\
			ft_memccpy.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			ft_putchar_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_putstr_fd.c\
			ft_split.c\
			ft_strchr.c\
			ft_strdup.c\
			ft_strndup.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strnlen.c\
			ft_strrev.c\
			ft_strmapi.c\
			ft_striteri.c\
			ft_strncmp.c\
			ft_strnstr.c\
			ft_strrchr.c\
			ft_strtrim.c\
			ft_substr.c\
			ft_tolower.c\
			ft_toupper.c

SRCS_BONUS	=	ft_lstadd_back.c\
			ft_lstadd_front.c\
			ft_lstclear.c\
			ft_lstdelone.c\
			ft_lstiter.c\
			ft_lstlast.c\
			ft_lstmap.c\
			ft_lstnew.c\
			ft_lstsize.c

OBJS		=	$(SRCS:.c=.o)
OBJS_BONUS	=	$(SRCS_BONUS:.c=.o)

NAME		=	libft.a
RM		=	rm -f
LIB		=	ar rcu
CC		=	gcc
CFLAGS		=	-Wall -Wextra -Werror

ifdef WITH_BONUS
	OBJ_SWITCH = $(OBJS_BONUS) 
else
	OBJ_SWITCH = $(OBJS)
endif

$(NAME)		:	$(OBJ_SWITCH)
			$(LIB) $@ $^

all		:	bonus $(NAME)

clean		:
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean		:	clean
			$(RM) $(NAME)

re		:	fclean all

bonus		:
			$(MAKE) WITH_BONUS=1 $(NAME)

.PHONY		:	all clean fclean re bonus
