NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

#Les différents fichiers à compiler
INC 		= 	libft.h

SRCS 		= 	ft_strlen.c	\
			ft_bzero.c		\
			ft_calloc.c		\
			ft_isalnum.c	\
			ft_isalpha.c	\
			ft_isascii.c	\
			ft_atoi.c		\
			ft_isdigit.c	\
			ft_isprint.c	\
			ft_memchr.c		\
			ft_memcmp.c 	\
			ft_memcpy.c		\
			ft_memmove.c	\
			ft_memset.c		\
			ft_strchr.c		\
			ft_strdup.c		\
			ft_strlcat.c	\
			ft_strlcpy.c 	\
			ft_strncmp.c 	\
			ft_strnstr.c 	\
			ft_strrchr.c 	\
			ft_tolower.c 	\
			ft_toupper.c 	\
			ft_itoa.c		\
			ft_putchar_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\
			ft_putstr_fd.c	\
			ft_split.c		\
			ft_strjoin.c	\
			ft_strmapi.c	\
			ft_strtrim.c	\
			ft_substr.c		\
			ft_striteri.c


#Declarer Objet avec le groupe  
OBJS = ${SRCS:.c=.o}

#On répète le shéma pour la partie Bonus
SRCS_BONUS =	ft_lstadd_back.c	\
				ft_lstadd_front.c	\
				ft_lstclear.c		\
				ft_lstdelone.c		\
				ft_lstiter.c		\
				ft_lstlast.c		\
				ft_lstmap.c			\
				ft_lstnew.c			\
				ft_lstsize.c			
 
OBJS_BONUS = ${SRCS_BONUS:.c=.o} 

#Mettre en place la création des fichiers objets
%.o: %.c $(INC)
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

#Création l'éxécutable 
$(NAME): ${OBJS}
		ar -rsc $(NAME) $(OBJS)

#Règle BONUS
bonus  : $(OBJS_BONUS)
	ar -rsc $(NAME) $(OBJS_BONUS)

all: $(NAME)

#Regle de nettoyage des fichiers objets 
clean:	
		rm -f $(OBJS) $(OBJS_BONUS)

#Regle de nettoyage executable
fclean:	clean
		rm -f $(NAME) 

re:	fclean all

#Eviter que meme si un fichier s'appelle clean, make executera la règle.
.PHONY: re clean fclean bonus
