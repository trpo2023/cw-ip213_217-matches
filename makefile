CC=gcc
CFLAGS=-Wall -Werror

SRC_DIR_1=path/to/cw-ip213_217-matches/src
INC_DIR_1=$(SRC_DIR_1)/include
SRCS_1=$(wildcard $(SRC_DIR_1)/*.c)
OBJS_1=$(SRCS_1:.c=.o)

SRC_DIR_2=path/to/cw-ip213_217-matches/test
INC_DIR_2=$(SRC_DIR_2)/include
SRCS_2=$(wildcard $(SRC_DIR_2)/*.c)
OBJS_2=$(SRCS_2:.c=.o)

all: src test

src: $(OBJS_1)
$(CC) $(CFLAGS) -I$(INC_DIR_1) -o src $(OBJS_1)

test: $(OBJS_2)
$(CC) $(CFLAGS) -I$(INC_DIR_2) -o test $(OBJS_2)

$(SRC_DIR_1)/%.o: $(SRC_DIR_1)/%.c
$(CC) $(CFLAGS) -I$(INC_DIR_1) -c $< -o $@

$(SRC_DIR_2)/%.o: $(SRC_DIR_2)/%.c
$(CC) $(CFLAGS) -I$(INC_DIR_2) -c $< -o $@

clean:
rm -f $(OBJS_1) $(OBJS_2) src test

.PHONY: all clean





