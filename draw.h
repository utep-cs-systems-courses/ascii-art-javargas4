#ifndef DRAW_INCLUDED
#define DRAW_INCLUDED
#include "stdbool.h"

void print_triangle(int startCol, int size);
void print_square(int startCol, int size, bool isArrow);
void print_arrow(int startCol, int size);
void print_char_11x16(char c);

extern const unsigned short font_11x16[95][11];
extern const unsigned char font_5x7[96][5];
extern const unsigned char font_8x12[95][12];

#endif
