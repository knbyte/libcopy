# Name of the static library to be built
Library = libft

SRC = "~/libft"

# List of source files (C functions) without the ".c" extension
# Find all files ending with ".c" in the current directory
files := $(wildcard ./*.c)

# Not 100% sure why but the files found end with .c.c so we need to remove the second .c
targets := $(files:%.c=%)

# Compiler to be used
Compiler = cc

# Compiler flags for the compilation process
CmpFlags = -g -Wall -Wextra -Werror

# Output name for the static library
OUTN = $(Library).a

# List of source files with ".c" extension
CFILES := $(targets:%=%.c)

# List of object files with ".o" extension (generated from C source files)
OFILES := $(targets:%=%.o)

# Target name for the final library file
NAME = libft.a

# Rule to build the library
$(NAME):
	$(Compiler) $(CmpFlags) -c $(CFILES) -I./
	ar -rc $(OUTN) $(OFILES)

# Default target is "all," which builds the library
all: $(NAME)

# Rule to clean up object files and the library
clean:
	rm -f $(NAME)
	rm -f $(OFILES)

# Rule to remove all generated files, including the library
fclean: clean
	rm -f $(NAME)

# Rule to force a rebuild of the library
re: fclean all

# Declaring the phony targets (targets that don't represent files)
.PHONY: all, clean, fclean, re


# LIST OF SOURCE FILES INSTEAD OF WILDCARD RULE:
# FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
# ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
# ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
# ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
# ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

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

# AFTER MARKING REPLACE SRC LIST WITH WILDCARD RULE:
# # List of source files (C functions) without the ".c" extension
# Find all files ending with ".c" in the current directory
# files := $(wildcard ./*.c)

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