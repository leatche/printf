# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcherepoff <tcherepoff@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/21 04:00:21 by tcherepoff        #+#    #+#              #
#    Updated: 2024/11/28 01:03:13 by tcherepoff       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_count_u.c     ft_count_c.c     ft_count_d.c     ft_count_p.c     ft_count_s.c     ft_count_x.c\
	ft_printf.c     ft_utils.c

OBJS = $(SRCS:.c=.o)
FLAG = -Wall -Werror -Wextra -Ilibft
RM = rm -f
AR = ar rcs

.c.o:
			$(CC) $(FLAG) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			$(MAKE) -C ./libft
			cp libft/libft.a $(NAME)
			$(AR) $(NAME) $(OBJS)

all:		$(NAME)

clean:
			$(MAKE) clean -C ./libft
			$(RM) $(OBJS)

fclean:		clean
			$(MAKE) fclean -C ./libft
			$(RM) $(NAME)
			

re:			fclean all

rebonus: fclean

.PHONY: bonus all clean fclean
