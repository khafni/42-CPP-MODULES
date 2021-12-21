SCRS = main.cpp convert.cpp display_result.cpp get_type.cpp literal_parser.cpp

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