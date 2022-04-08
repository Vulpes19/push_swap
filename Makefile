NAME = push_swap
HEADER = include/push_swap.h ft_printf/ft_printf.h
PRINTF = ft_printf
MINI = mini_libft
LIBPRINTF = ft_printf/libftprintf.a
MINILIBFT = mini_libft/minilibft.a
MAIN = main.c
SRC = free_list.c lst_tools_a.c lst_tools_b.c ft_atoi.c parsing.c print_lst.c operations_a.c
OBJS = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
DEL = rm -f

all: $(NAME)
%.o: %.c
	cc $(CFLAGS) -c $<

$(NAME): $(LIBPRINTF) $(OBJS) $(HEADER)
	cc $(CFLAGS) $(LIBPRINTF) $(MAIN) $(OBJS) -o $(NAME)
 
$(LIBPRINTF):
	$(MAKE) -C $(PRINTF)

clean:
	$(DEL) $(OBJS)
	$(MAKE) -C $(PRINTF) clean

fclean: clean
	$(DEL) $(NAME)
	$(MAKE) -C $(PRINTF) fclean

re: fclean all

.PHONY: all clean fclean re