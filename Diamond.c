#include <stdio.h>
int main() {
    int line, a, space;
    int n = 1, inc = 1;
    int max = 5;  // max number of lines in upper half (middle of diamond)

    for (line = 1; line <= 9; line++) {
        // print spaces before stars
        for (space = 1; space <= max - n; space++) {
            printf(" ");
        }
        // print stars
        for (a = 1; a <= 2 * n - 1; a++) {
            printf("*");
        }
        // increase or decrease n
        n += inc;
        if (n == max) {
            inc = -1;
        }

        printf("\n");
    }

    return 0;
}
/*
Output
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
