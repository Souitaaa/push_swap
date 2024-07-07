NAME			= push_swap
NAME_1          = checker

SRCS	= ft_putstr.c ft_strlen.c ft_strjoin.c parsing.c \
			ft_memcpy.c ft_split.c fill_up_stack_a.c push_swap.c ft_strdup.c \
			utils.c frees.c mini_sort.c moves_2.c moves.c index.c loot.c moves_3.c \

SRCSB   = checker.c ft_putstr.c ft_strlen.c ft_strjoin.c parsing.c \
			ft_memcpy.c ft_split.c fill_up_stack_a.c ft_strdup.c \
			utils.c frees.c mini_sort.c moves_2.c moves.c index.c loot.c moves_3.c \

					
CC				= cc
RM				= rm -f
# CFLAGS			= -Wall -Wextra  -fsanitize=address -g3
CFLAGS			= -Wall -Wextra -Werror

OBJS			= $(SRCS:.c=.o)
OBJSB           = $(SRCSB:.c=.o)

all:			$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

bonus: 			$(NAME_1)

$(NAME_1): $(OBJSB)
	$(CC) $(CFLAGS) $(OBJSB) -o $(NAME_1)	

clean:
	$(RM) $(OBJS) 

fclean:clean 
	$(RM) $(NAME) $(NAME_1)

re:fclean all bonus
# .SECONDARY : $(OBJS)