#
#HEADER
#


NAME       = libfts.a

FORMAT     = -f macho64

CC         = ~/../../usr/local/Cellar/nasm/2.11.08/bin/nasm

SRC        = minima.s ft_isdigit.s

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
	@rm -f $(OBJ)

fclean:
	@echo "\033[31mFclean libft asm!\033[0m"
	@rm -f $(NAME) $(OBJ)

test: all
	@gcc -Wall -Werror -Wextra -c maintest.c
	@ld maintest.o libfts.a -macosx_version_min 10.10 -lSystem

re: fclean all
