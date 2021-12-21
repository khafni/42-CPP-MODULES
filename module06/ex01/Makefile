SCRS = main.cpp serialize.cpp

NAME = main
cc = clang++
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	$(cc) $(CFLAGS) $(SCRS) -o $(NAME)

clean:
	@rm -Rf $(NAME)

fclean: clean
	@echo "cleaned everything"

re: fclean all