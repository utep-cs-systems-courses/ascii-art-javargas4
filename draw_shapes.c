#include <stdio.h>
#include <stdbool.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size, bool isArrow)
{
  int i, j;
  int endCol = leftCol + size;
  int row = 0;
  if(isArrow) {
    row = -5;
  }
  
  for (         ; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    if(isArrow) {
      putchar(' '); putchar(' '); putchar(' '); putchar(' ');
    }
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

// Prints an arrow using triangle and square functions
void print_arrow(int leftCol, int size)
{
  bool isArrow = true;
  print_triangle(leftCol, size);
  print_square(leftCol, size, true);
  putchar('\n');
}
