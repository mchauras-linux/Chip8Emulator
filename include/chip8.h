#ifndef CHIP8_H
#define CHIP8_H
#include "config.h"
#include "chip8mem.h"
#include "chip8registers.h"

struct chip8
{
    struct chip8memory memory;
    struct chip8registers registers;
};

#endif