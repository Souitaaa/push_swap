NAME			= push_swap

SRCS	= ft_putstr.c ft_strlen.c ft_strjoin.c parsing.c \
			ft_memcpy.c ft_split.c fill_up_stack_a.c push_swap.c ft_strdup.c \
			utils.c frees.c 

					
CC				= cc
RM				= rm -f
# CFLAGS			= -Wall -Wextra  -fsanitize=address -g3
CFLAGS			= -Wall -Wextra -Werror

OBJS			= $(SRCS:.c=.o)

all:			$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS) 

fclean:clean
	$(RM) $(NAME)

re:fclean all
.SECONDARY : $(OBJS)