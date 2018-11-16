# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: magrinbe <magrinbe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/16 17:18:49 by magrinbe          #+#    #+#              #
#    Updated: 2018/11/16 21:41:39 by magrinbe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRC	=	*.c

FLAG	=	-Wall -Wextra -Werror

FILES	=	*.o

all:	$(NAME)

$(NAME):
	gcc	$(FLAG) -c $(SRC)
	ar rc $(NAME) $(FILES)
	ranlib $(NAME) 

clean:
	rm -f $(FILES)

fclean:	clean
	rm -f $(NAME)
	
re: fclean all