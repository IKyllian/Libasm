HEADER = libasm.h
NAME = libasm.a
MAIN = main.c
SRCS = ft_strlen.s ft_strcmp.s ft_strcpy.s ft_strdup.s ft_write.s ft_read.s ft_list_size.s

OBJS = $(SRCS:.s=.o)

CC = gcc
FLAGS = -Wextra -Werror -Wall
RM = rm -f

all : $(NAME)

%.o : %.s $(HEADER)
	nasm -f macho64 $< -o $@

$(NAME) : $(OBJS) $(HEADER)
	ar cr $(NAME) $(OBJS)

run : $(NAME)
	gcc $(NAME) $(MAIN) && ./a.out

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean fclean re all bonus