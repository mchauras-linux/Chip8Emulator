#include "chip8mem.h"
#include <assert.h>

static void chip8_is_mem_in_bounds(int index)
{
    assert(index >= 0 && index < CHIP8_MEMORY_SIZE);
}

void chip8_mem_set(struct chip8memory* memory, int index, unsigned char val)
{
    chip8_is_mem_in_bounds(index);
    memory->memory[index] = val;
}

unsigned char chip8_mem_get(struct chip8memory* memory, int index)
{
    chip8_is_mem_in_bounds(index);
    return memory->memory[index];
}

unsigned short chip8_mem_get_short(struct chip8memory* memory, int index)
{
    unsigned char byte1 = chip8_mem_get(memory, index);
    unsigned char byte2 = chip8_mem_get(memory, index + 1);

    return (byte1 << 8) | byte2;
}