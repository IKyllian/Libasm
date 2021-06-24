HEADER = libasm.h
NAME = libasm.a
MAIN = main.c
MAIN_BONUS = main_bonus.c

SRCS = ft_strlen.s ft_strcmp.s ft_strcpy.s ft_strdup.s ft_write.s ft_read.s
SRCS_BONUS = ft_list_size_bonus.s ft_list_push_front_bonus.s

OBJS = $(SRCS:.s=.o)
OBJS_BONUS = $(SRCS_BONUS:.s=.o)
CC = gcc
FLAGS = -Wextra -Werror -Wall
RM = rm -f

all : $(NAME)

%.o : %.s $(HEADER)
	nasm -f macho64 $< -o $@

$(NAME) : $(OBJS) $(HEADER)
	ar cr $(NAME) $(OBJS)

bonus : $(NAME) $(OBJS_BONUS) $(HEADER)
	ar cr $(NAME) $(OBJS_BONUS)

run : $(NAME)
	gcc $(NAME) $(MAIN) && ./a.out

run_bonus : bonus
	gcc -o bonus $(NAME) $(MAIN_BONUS) && ./bonus

clean : 
	$(RM) $(OBJS)
	$(RM) $(OBJS_BONUS)
	$(RM) a.out
	$(RM) bonus

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean fclean re all bonus