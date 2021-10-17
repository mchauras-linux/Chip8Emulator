#ifndef CHIP8MEMORY_H
#define CHIP8MEMORY_H

#include "config.h"
struct chip8memory
{
    unsigned char memory[CHIP8_MEMORY_SIZE];
};

void chip8_mem_set(struct chip8memory* memory, int index, unsigned char val);
unsigned char chip8_mem_get(struct chip8memory* memory, int index);

#endif