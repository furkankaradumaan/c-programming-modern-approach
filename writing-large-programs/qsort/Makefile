CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99 -Werror

SRCS = $(wildcard *.c)
OBJS = $(patsubst obj/%.o, %.c, $(SRCS))

TARGET = qsort

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

obj/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm obj/*.o $(TARGET)
