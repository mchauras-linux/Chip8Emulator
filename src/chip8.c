#include "chip8.h"
#include <memory.h>

void chip8Init(struct chip8* chip8)
{
    memset(chip8, 0, sizeof(struct chip8));
}