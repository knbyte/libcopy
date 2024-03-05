CC = cc

CFLAGS = -g -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \ ft_strncmp.c \
ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \ ft_strdup.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)

NAME = libft.a

RM = rm -f

AR = ar rcs

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_listdelone_bonus.c \
ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

BONUS_OBJS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
    $(AR) $@ $^

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    $(RM) $(OBJS) $ $(BONUS_OBJS)

fclean: clean
    $(RM) $(NAME) 

re: fclean $(NAME)

bonus: $(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus


# NOTES

# Makefiles compile your .c files into .o files then turns all of the .o files into one executable file.
# $( ) references the variable you list inside the brackets.
# -g = put out debug info (shows what complied code looks like as regular code)
# SRCS:.c=.o // Making a copy of every SRCS file but every .c file is replaced to .o 

# Default target is "all," which builds the library
# Compilation rule  |  ar rcs: $@: $^:
# %.o: %.c  |  Object files compilation rule  |  -c: $<: -o: $@: 
# re = Rebuild rule (Rule to force a rebuild of the library)
# .PHONY = Declaring the phony targets (targets that don't represent files)