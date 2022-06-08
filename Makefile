# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: segarcia <segarcia@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/27 11:20:39 by segarcia          #+#    #+#              #
#    Updated: 2022/06/08 13:26:37 by segarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_itoa.c ft_printf_char.c ft_printf_int.c ft_printf_uint.c ft_printf_str.c \
					ft_printf.c ft_uitoa.c ft_printf_hex.c

OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
