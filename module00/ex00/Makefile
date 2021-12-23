SCRS = megaphone.cpp

NAME = megaphone
cc = clang++
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	$(cc) $(CFLAGS) $(SCRS) -o megaphone

clean:
	@rm -Rf megaphone

fclean: clean
	@echo "cleaned everything"

re: fclean all