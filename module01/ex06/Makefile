SCRS = main.cpp Karen.cpp

NAME = main
cc = clang++
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	$(cc) $(CFLAGS) $(SCRS) -o Zombie

clean:
	@rm -Rf Zombie

fclean: clean
	@echo "cleaned everything"

re: fclean all