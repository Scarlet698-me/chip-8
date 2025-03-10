#include <stdio.h>
#include <stdint.h>

#define MEMSIZE 4096

uint8_t memory[(MEMSIZE)];
uint8_t PC = 0;
uint16_t I;
uint16_t stack[16];

uint8_t delayTimer;
uint8_t soundTimer;

uint8_t varReg[16];

uint16_t keyboard[16];



int font[] = {
 0xF0, 0x90, 0x90, 0x90, 0xF0, // 0
 0x20, 0x60, 0x20, 0x20, 0x70, // 1
 0xF0, 0x10, 0xF0, 0x80, 0xF0, // 2
 0xF0, 0x10, 0xF0, 0x10, 0xF0, // 3
 0x90, 0x90, 0xF0, 0x10, 0x10, // 4
 0xF0, 0x80, 0xF0, 0x10, 0xF0, // 5
 0xF0, 0x80, 0xF0, 0x90, 0xF0, // 6
 0xF0, 0x10, 0x20, 0x40, 0x40, // 7
 0xF0, 0x90, 0xF0, 0x90, 0xF0, // 8
 0xF0, 0x90, 0xF0, 0x10, 0xF0, // 9
 0xF0, 0x90, 0xF0, 0x90, 0x90, // A
 0xE0, 0x90, 0xE0, 0x90, 0xE0, // B
 0xF0, 0x80, 0x80, 0x80, 0xF0, // C
 0xE0, 0x90, 0x90, 0x90, 0xE0, // D
 0xF0, 0x80, 0xF0, 0x80, 0xF0, // E
 0xF0, 0x80, 0xF0, 0x80, 0x80  // F
};


int main()
{
    return 0;
}
