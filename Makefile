# Define the compiler and compiler flags
CC := gcc

# Define the source directory
SRCDIR := .

# Find all .c files recursively in the source directory
SRCS := $(shell find $(SRCDIR) -type f -name "*.c")

# Generate a list of corresponding .o files
OBJS := $(patsubst %.c,%.o,$(SRCS))

# The default target is to build the executable
all: my_program

# Build the executable using the .o files
my_program: $(OBJS)
	$(CC)ft_sort_int_tab -o $@ $^

# Compile each .c file into a .o file in the corresponding directory
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Create the directories for the .o files if they don't exist
$(sort $(dir $(OBJS))):
	mkdir -p $@

# Clean up the executable and object files
clean:
	rm -f my_program $(OBJS)

.PHONY: all clean
