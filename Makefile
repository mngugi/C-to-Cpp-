CC = gcc
CFLAGS = -Wall -Wextra

SRC_DIR = .
SRCS := $(wildcard $(SRC_DIR)/*.c)
BINS := $(patsubst $(SRC_DIR)/%.c,%,$(SRCS))

.PHONY: all clean

all: $(BINS)

$(BINS): %: $(SRC_DIR)/%.c
    $(CC) $(CFLAGS) -o $@ $<

clean:
    rm -f $(BINS) ;

