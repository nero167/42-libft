CC = gcc
CFLAGS = -Wall -Wextra -std=c11
Name = libft

SRCs = //die funkitonsnamen
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
    $(CC) $(CFLAGS) $(OBJS) -0 $(NAME)

fclean:
    rm -f $(NAME)
    rm -f $(OBJS)   
