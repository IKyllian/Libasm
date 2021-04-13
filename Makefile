HEADER = libasm.h
NAME = libasm.a
MAIN = main.c
SRCS = ft_strlen.s ft_strcmp.s

OBJS = $(SRCS:.s=.o)

CC = gcc
FLAGS = -Wextra -Werror -Wall
RM = rm -f

all : $(NAME)

%.o : %.c $(HEADER)
	nasm -f macho64 -o $@ $<

$(NAME) : $(OBJS) $(HEADER)
	ar cr $(NAME) $(OBJS)

run : $(NAME)
	gcc $(NAME) $(MAIN) -o $@ 

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean fclean re all bonus