TAR = main4_1
CC = gcc

ifeq ($(debugCFLAGS),)
    FINAL_CFLAGS = $(CFLAGS)
else
    FINAL_CFLAGS = $(debugCFLAGS)
endif

SRC = input.c output.c main4_1.c
OBJ = $(SRC:.c=.o)

$(TAR): $(OBJ)
	$(CC) $(FINAL_CFLAGS) $(OBJ) -o $(TAR)
	
%.o: %.c
	$(CC) $(FINAL_CFLAGS) -c $< -o $@
	
.PHONY:
clean:
	rm -rf $(OBJ) $(TAR)