#include <stdio.h>
#include "draw.h" // project-related declarations

int main() 
{
  puts("\t\t        Welcome!");

  while (1) { // Infinite while loop

    fputs("\t   Select the shape you want print: \nTriangle = t    Square = s    Letters = c    Arrow = a\n                 (or enter 'q' to quit)\nType Your Choice: ", stdout);
    fflush(stdout);		/* stdout only flushes automatically on \n */
    int c;
    while ((c = getchar()) == '\n'); /* ignore newlines */
    if (c == EOF)		     /* terminate on end-of-file */
      goto done;

    // Given the user answer, select which method to call
    switch (c) {
    case 't':
      puts("You selected triangle:");
      print_triangle(5, 7);
      break;
    case 's':
      puts("You selected square:");
      print_square(5, 5);
      break;
    case 'c':
      puts("You selected chars:");
      for (char c = 'A'; c < 'D'; c++)
	print_char_11x16(c);
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
