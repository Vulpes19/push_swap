NAME = minilibft.a
SRC = ft_atoi.c ft_calloc.c ft_split.c ft_strlen.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

all: $(NAME)

%.o: %.c
	cc $(CFLAGS) -c $<
	$(AR) $(NAME) $@

$(NAME): $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re