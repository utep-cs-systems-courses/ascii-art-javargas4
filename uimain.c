

#include <stdio.h>
#include "draw.h" // project-related declarations
#include "stdbool.h"

int main() 
{
  puts("\t\t        Welcome!");

  while (1) { // Infinite while loop
    // Console print out
    fputs("\t   Select the shape you want print: \nTriangle = t    Square = s    Letters = c    Arrow = a\n                 (or enter 'q' to quit)\nType Your Choice: ", stdout);
    fflush(stdout);		/* stdout only flushes automatically on \n */
    int c;
    while ((c = getchar()) == '\n'); /* ignore newlines */
    if (c == EOF)		     /* terminate on end-of-file */
      goto done;

    // Given the user answer, select which method to call
    switch (c) {
    case 't':
      puts("\nYou selected triangle:\n");
      print_triangle(5, 7);
      putchar('\n');
      break;
    case 's':
      puts("\nYou selected square:\n");
      print_square(5, 5, false);
      putchar('\n');
      break;
    case 'c':
      puts("\nYou selected chars:\n");
      for (char c = 'a'; c < 'd'; c++)
	// print_char_11x16(c);
        print_char_8x12(c);
      break;
    case 'a':
      puts("\nYou selected arrow:\n");
      print_arrow(5, 7);
      break;
    case 'q':
      puts("Bye!");
      goto done; 		/* terminate */
    case '\n':
      break;
    default:
      printf("Unrecognized option '%c', please try again!\n", c);
    }
  }

 done: // To exit from program
  return 0;
}
