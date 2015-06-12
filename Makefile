#
#HEADER
#


NAME       = libfts.a

FORMAT     = -f macho64

CC         = ~/.brew/Cellar/nasm/2.11.08/bin/nasm      #~/../../usr/local/Cellar/nasm/2.11.08/bin/nasm

SRC        = ft_isdigit.s ft_isalpha.s ft_isalnum.s ft_isascii.s ft_isprint.s ft_tolower.s ft_toupper.s \
			 ft_strlen.s ft_bzero.s ft_strcat.s ft_memset.s ft_memcpy.s ft_strdup.s ft_cat.s ft_puts.s \

OBJ        = $(SRC:%.s=%.o)


all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[32mBuilding libft asm...\033[0m"
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[0m"
	@echo "   ██╗     ██╗██████╗ ███████╗████████╗         █████╗ ███████╗███╗   ███╗"
	@echo "   ██║     ██║██╔══██╗██╔════╝╚══██╔══╝        ██╔══██╗██╔════╝████╗ ████║"
	@echo "   ██║     ██║██████╔╝█████╗     ██║           ███████║███████╗██╔████╔██║"
	@echo "   ██║     ██║██╔══██╗██╔══╝     ██║           ██╔══██║╚════██║██║╚██╔╝██║"
	@echo "   ███████╗██║██████╔╝██║        ██║           ██║  ██║███████║██║ ╚═╝ ██║           ///    "
	@echo "   ╚══════╝╚═╝╚═════╝ ╚═╝        ╚═╝           ╚═╝  ╚═╝╚══════╝╚═╝     ╚═╝         ( @@ )   "
	@echo "                                                                               __ooO-(_)-Ooo__"

%.o: %.s
	@$(CC) $(FORMAT) $<

clean:
	@echo "\033[33mCleaning libft asm!\033[0m"
	@rm -f $(OBJ) maintest.o

fclean:
	@echo "\033[31mFclean libft asm!\033[0m"
	@rm -f $(NAME) $(OBJ) a.out maintest.o

test: all
	@gcc -Wall -Werror -Wextra -c maintest.c
	@ld maintest.o libfts.a -macosx_version_min 10.10 -lSystem

re: fclean all
