CC=gcc
CFLAGS=-Wall -Werror
TARGET= Matches

PREF_SRC = ./src/
PREF_TEST = ./test/

SRC = $(wildcard $(PREF_SRC)*.c)
TEST = $(patsubt $(PREF_SRC)%.c, $(PREF_TEST)%.c, $(SRC))

$(TARGET) : $(TEST)
	$(CC) $(TEST) -o $(TARGET)

$(PREF_TEST)%.o : $(PREF.SRC)%.clean	
	$(CC) -c $< -o $@

clean:
	rm $(TARGET) $(PREF_TEST)*.o
