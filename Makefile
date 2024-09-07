NAME = cns_str_cmp
CC = gcc
FLAGS = -Werror -Wextra -Wall -I./inc
RM = del /Q

SOURCE = cns_strcmp.c  \
		 cns_strncmp.c \
		 cns_strchr.c  \
		 cns_strrchr.c \
		 cns_strstr.c  \
		 main.c

OBJS = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $@ $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME).exe

re: fclean all

.PHONY: all clean fclean re
		