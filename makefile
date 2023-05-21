CC=gcc
CFLAGS=-Wall -o
TARGET= Matches

PREF_SRC = ./src/
PREF_TEST = ./test/

SRC = $(wildcard $(PREF_SRC)*.c)
TEST = $(wildcard $(PREF_TEST)*.c)

aSRC = $(patsubst %.c, %.o, $(SRC))
bTEST = $(patsubst %.c, %.o, $(TEST))

$(TARGET) : $(bTEST) $(aSRC)
	$(CC) $(CFLAGS) $(bTEST) $(aSRC) -o $(TARGET)

%.o : %.c	
	$(CC) -c $< -o $@

clean:
	rm $(TARGET) $(PREF_TEST)*.o $(PREF_SRC)*.o
