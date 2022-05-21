NAME = push_swap
HEADER = include/push_swap.h ft_printf/ft_printf.h
PRINTF = ft_printf
LIBPRINTF = ft_printf/libftprintf.a
MAIN = main.c
SRC = free_list.c lst_tools_a.c additional_func2.c sorting_func.c bitwise_op.c additional_func.c simplify_nbrs.c ft_atoi.c parsing.c operations_a.c operations_b.c
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

$(MINILIBFT):
	$(MAKE) -C $(MINI)

clean:
	$(DEL) $(OBJS)
	$(MAKE) -C $(PRINTF) clean

fclean: clean
	$(DEL) $(NAME)
	$(MAKE) -C $(PRINTF) fclean

re: fclean all

.PHONY: all clean fclean re