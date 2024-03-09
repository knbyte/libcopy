CC = cc

CFLAGS = -g -Wall -Wextra -Werror

SRCS = $(filter-out %_bonus.c,$(wildcard *.c))

OBJS = $(SRCS:.c=.o)

NAME = libft.a

RM = rm -f

AR = ar -rcs

BONUS = $(wildcard *_bonus.c)

BONUS_OBJS = $(BONUS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@ß

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME) 

re: fclean all

bonus: $(BONUS_OBJS)
	$(AR) $(NAME) $^

.PHONY: all clean fclean re bonusß


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





# $^ is an automatic variable that represents all of the prerequisites (dependencies) of the current target.
# $@ is an automatic variable that represents the target of the rule being executed.
# $< is an automatic variable that represents the first prerequisite (dependency) of the current target.

# MAKEFILE EXAMPLE:     # $(NAME): $(OBJS)  \\      $(AR) $@ $^
# Here, $@ represents the target name ($(NAME)), and $^ represents all of the prerequisites ($(OBJS)), which are the object files generated from your source files.
# So, when this rule is executed, it effectively means "use ar to create the library named $(NAME) from all of the object files specified in $(OBJS)."
# This syntax is very handy for avoiding repetition and making your Makefile more concise and maintainable.

# MAKEFILE EXAMPLE:     # $(NAME): $(OBJS)  \\      $(AR) $@ $^
#Here, $< represents the first prerequisite, which is the source file (%.c) that triggered the rule. So, when this rule is executed, it effectively 
# means "compile the source file into an object file using the C compiler ($(CC)) with the specified flags ($(CFLAGS)),
# and save the output as the target object file ($@)."
# This syntax is commonly used for generating object files from source files in Makefiles.