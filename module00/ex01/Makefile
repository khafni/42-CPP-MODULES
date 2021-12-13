SCRS = phonebook.cpp Contact.cpp

NAME = phonebook
cc = clang++
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	$(cc) $(CFLAGS) $(SCRS) -o phonebook

clean:
	@rm -Rf phonebook

fclean: clean
	@echo "cleaned everything"

re: fclean all