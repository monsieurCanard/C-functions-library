NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3 -I.

################
##   LIBS	  ##
################

LIBFT = $(LIBFT_DIR)libft.a
LIBFT_DIR = 
LIBFT_INC = .

#################
##   INCLUDE   ##
#################

INCLUDE_LIST	=	$(LIBFT_INC)
INCLUDE			=	$(addprefix -I, $(INCLUDE_LIST))


#######################
##   SOURCES FILES   ##
#######################

CONVERSION_DIR = Conversion/
CONVERSION 	= 	ft_atoi.c	\
				ft_itoa.c
SRC_CONVERSION =	$(addprefix $(CONVERSION_DIR), $(CONVERSION))

DISPLAY_DIR = Display/
DISPLAY 	=	ft_putchar_fd.c	\
				ft_putendl_fd.c	\
				ft_putnbr_fd.c	\
				ft_putstr_fd.c
SRC_DISPLAY =	$(addprefix $(DISPLAY_DIR), $(DISPLAY))

IDENTIFIER_DIR = Identifier/
IDENTIFIER 	=	ft_isalnum.c	\
				ft_isalpha.c	\
				ft_isascii.c	\
				ft_isdigit.c	\
				ft_isprint.c
SRC_IDENTIFIER =	$(addprefix $(IDENTIFIER_DIR), $(IDENTIFIER))

LINKED_LIST_DIR = Linked_list/
LINKED_LIST_LIST =	ft_lstadd_back.c	\
					ft_lstadd_front.c	\
					ft_lstclear.c		\
					ft_lstdelone.c		\
					ft_lstiter.c		\
					ft_lstlast.c		\
					ft_lstmap.c			\
					ft_lstnew.c			\
					ft_lstsize.c
SRC_LINKED_LIST =	$(addprefix $(LINKED_LIST_DIR)/, $(LINKED_LIST_LIST))


MEMORY_DIR = 	Memory/
MEMORY_LIST	=	ft_bzero.c	\
				ft_calloc.c	\
				ft_memchr.c	\
				ft_memcmp.c	\
				ft_memcpy.c	\
				ft_memmove.c \
				ft_memset.c
SRC_MEMORY	=	$(addprefix $(MEMORY_DIR), $(MEMORY_LIST))

STRING_DIR = String/
STRING_LIST		=	ft_strchr.c	\
					ft_split.c	\
					ft_strdup.c	\
					ft_striteri.c	\
					ft_strjoin.c	\
					ft_strlcat.c	\
					ft_strlcpy.c	\
					ft_strlen.c	\
					ft_strmapi.c	\
					ft_strncmp.c	\
					ft_strnstr.c	\
					ft_strrchr.c	\
					ft_strtrim.c	\
					ft_substr.c	\
					ft_tolower.c	\
					ft_toupper.c
SRC_STRING		=	$(addprefix $(STRING_DIR), $(STRING_LIST))

SSTACK_DIR	=	Sstack/
SSTACK_LIST	=		s_clear_stk.c		\
					s_init_stk.c		\
					s_isempty_stk.c		\
					s_isfull_stk.c		\
					s_len_stk.c			\
					s_pop_stk.c			\
					s_push_stk.c		\
					s_rollup_stk.c		\
					s_rolldown_stk.c	\
					s_swap_stk.c
SRC_SSTACK		=	$(addprefix $(SSTACK_DIR), $(SSTACK_LIST))

DSTACK_DIR	=	Dstack/
DSTACK_LIST	=		d_clear_stk.c		\
					d_drop_stk.c		\
					d_init_stk.c		\
					d_isempty_stk.c		\
					d_pop_stk.c			\
					d_push_stk.c		\
					d_swap_stk.c
SRC_DSTACK		=	$(addprefix $(DSTACK_DIR), $(DSTACK_LIST))

VECTOR2_DIR	=	Vector2/
VECTOR2_LIST	=	add_vector2.c \
					cross_vector2.c \
					dot_vector2.c \
					magnitude_vector2.c \
					normalize_vector2.c \
					sub_vector2.c \
					vector2.c
SRC_VECTOR2		=	$(addprefix $(VECTOR2_DIR), $(VECTOR2_LIST))

VECTOR3_DIR	=	Vector3/
VECTOR3_LIST	=	add_vector3.c \
					cross_vector3.c \
					dot_vector3.c \
					magnitude_vector3.c \
					normalize_vector3.c \
					sub_vector3.c \
					vector3.c
SRC_VECTOR3		=	$(addprefix $(VECTOR3_DIR), $(VECTOR3_LIST))

SRC_DIR = ./
SRC_LIST			=	$(SRC_CONVERSION)	\
						$(SRC_DISPLAY)		\
						$(SRC_IDENTIFIER)	\
						$(SRC_LINKED_LIST)	\
						$(SRC_MEMORY)		\
						$(SRC_SSTACK)		\
						$(SRC_DSTACK)		\
						$(SRC_STRING)		\
						$(SRC_VECTOR2)		\
						$(SRC_VECTOR3)
SRC					=	$(addprefix $(SRC_DIR), $(SRC_LIST))

##################
##   OBJ/NAME   ##
##################

OBJ_DIR		=	objects/
OBJ_LIST	=	$(addprefix $(OBJ_DIR), $(SRC_LIST:.c=.o))

#################
##	 COLORS	   ##
#################

COLOR_RESET		=	\033[0m
COLOR_GREEN		=	\033[38;5;76m
COLOR_RED		=	\033[38;5;160m
COLOR_BLUE		=	\033[38;5;45m
COLOR_ORANGE	=	\033[38;5;220m
BOLD			=	\033[1m
UNDERLINE		=	\033[4m

################
##	PROGRESS  ##
################

COMPILED_SRCS		:=	1

TOTAL_SRCS			:=	$(words $(SRC))


MAX_PATH_LENGTH 	:=	$(shell find $(SRC_DIR) -name '*.c' | awk '{print length}' | sort -nr | head -n1)
MAX_NAME_LENGTH 	:=	$(shell find $(SRC_DIR) -name '*.c' -exec basename {} \; | awk '{ print length }' | sort -nr | head -n1)

define progress_bar
	printf "$(COLOR_BLUE)Compiling: [$(COLOR_GREEN)"; \
	for i in $$(seq 1 $(4)); do \
		if [ $$i -le $$(($(1)*$(4)/$(2))) ]; then \
			printf "#"; \
		else \
			printf "."; \
		fi; \
	done; \
	printf "$(COLOR_BLUE)] $(BOLD)$(1)/$(2) $(COLOR_GREEN)$(3)$(COLOR_RESET)\r"
endef

define print_progress
	@$(eval WIDTH := $(shell tput cols))
	@$(eval LEN := $(shell expr $(WIDTH) - $(MAX_PATH_LENGTH) - 26))
	
	@printf "\033[2K"; \
	if [ $(LEN) -le 10 ]; then \
		printf "$(COLOR_BLUE)Compiling: $(BOLD)$(1)/$(2)$(COLOR_RESET)$(COLOR_GREEN) $(notdir $(3))$(COLOR_RESET)\r"; \
	else \
		$(call progress_bar,$(1),$(2),$(3),$(LEN)); \
	fi
endef

#################
##    RULES    ##
#################

all: $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

	@$(eval COMPILED_SRCS=$(shell expr $(COMPILED_SRCS) + 1))
	@$(call print_progress,$(COMPILED_SRCS),$(TOTAL_SRCS), $<)


$(NAME): $(OBJ_LIST)
	@ar rcs $(NAME) $(OBJ_LIST)
	@echo "\033[2K$(COLOR_ORANGE)$(BOLD)Compilation complete ! $(COLOR_BLUE)Libft is Ready !$(COLOR_RESET)"
clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(COLOR_RED)$(BOLD)Delete $(NAME) objects$(COLOR_RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(COLOR_RED)$(BOLD)Delete Libft$(COLOR_RESET)"

re: fclean all

.PHONY: all clean fclean re