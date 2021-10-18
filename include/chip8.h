#ifndef CHIP8_H
#define CHIP8_H
#include "config.h"
#include "chip8mem.h"
#include "chip8registers.h"
#include "chip8stack.h"
#include "chip8keyboard.h"
#include "chip8screen.h"

struct chip8
{
    struct chip8memory memory;
    struct chip8registers registers;
    struct chip8stack stack;
    struct chip8keyboard keyboard;
    struct chip8_screen screen;
};

void chip8Init(struct chip8* chip8);

#endif