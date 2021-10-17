INCLUDES= -I ./include
FLAGS= -g

OBJECTS=./build/chip8mem.o

all: ${OBJECTS}
	gcc ${FLAGS} ${INCLUDES} ./src/main.c ${OBJECTS} -L ./lib -lmingw32 -lSDL2main -lSDL2 -o ./bin/main

./build/chip8mem.o:src/chip8mem.c
	gcc ${FLAGS} ${INCLUDES} ./src/chip8mem.c -c -o ./build/chip8mem.o

clean:
	del build\*
