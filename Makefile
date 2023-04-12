NAME = libft.a

FLAGS = -Wall -Werror -Wextra -I. -c
SRC = ft_bzero.c ft_isalnum.c ft_isdigit.c ft_isalpha.c ft_isascii.c ft_isprint.c ft_strlcpy.c ft_strlen.c ft_tolower.c ft_toupper.c ft_memset.c ft_strchr.c ft_strrchr.c ft_memset.c ft_memcpy.c ft_strlcpy.c
OBJ = $(SRC:%.c=%.o)

all: ${NAME}

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	echo "Compilando libft"

$(OBJ): $(SRC)
	gcc $(FLAGS) $(SRC)
	echo "Compilando libft"

clean:
	rm -rf ${OBJ}
fclean:
	rm -f ${NAME}

re: fclean all

.PHONY: clean fclean all re 
