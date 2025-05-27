CC=gcc
CFLAGS=-Wall -g
OBJS=src/main.o src/task.o

task_manager: $(OBJS)
	$(CC) $(CFLAGS) -o task_manager $(OBJS)

src/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f src/*.o task_manager
