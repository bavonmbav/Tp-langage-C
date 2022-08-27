CC = gcc
EXEC = prog.exe
OBJ = finder.o
CFLAGS = -wall

$(EXEC) :$(OBJ)
		$(CC) -o $(EXEC) $(OBJ)


# finder.o: finder.c
# 		$(CC) -c finder.c

%.o: %.c
	$(CC) -o $@ -c $<

run : $(EXEC)
		./$(EXEC)
clean : 
		rm -f prog *.o