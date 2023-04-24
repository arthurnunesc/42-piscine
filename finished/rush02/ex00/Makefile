# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elpueblo <muchagente@student.42barce>       +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/26 17:36:05 by elpueblo          #+#    #+#              #
#    Updated: 2023/02/26 17:43:40 by vmontoli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
OBJECTS = main.o ft_key.o ft_val.o ft_checkerror.o ft_max.o ft_fileopen.o \
ft_filecountlines.o ft_struct.o ft_parse_args.o ft_strcpy.o ft_print_int.o \
ft_aux_print_int.o
CFLAGS = -Wall -Werror -Wextra

${NAME}: ${OBJECTS}
	cc ${CFLAGS} ${OBJECTS} -o ${NAME}

all: ${NAME}

%.o : %.c
	cc -c ${CFLAGS} $< -o $@

fclean: clean
	rm -f ${NAME}

clean:
	rm -f *.o

re: fclean all
