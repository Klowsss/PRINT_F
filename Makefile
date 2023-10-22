
SRCS =		ft_putstr_fd.c \
		ft_pourcent.c \
		put_0x.c \
		put_nbr_dec_d_i.c \
		put_nbr_hex_low.c \
		put_nbr_hex_upper.c \
		put_nbr_pos.c \
		ft_printf.c \
		ft_all_strlen.c \

OBJS =	$(SRCS:.c=.o)

CC =	gcc

CFLAGS  =	-Werror -Wextra -Wall

RM =	rm -rf

NAME =	libftprintf.a

all :	$(NAME)

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME) :	$(OBJS)
		ar rcs $(NAME) $(OBJS)

clean :  
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re :	fclean all

.PHONY : all clean fclean re

