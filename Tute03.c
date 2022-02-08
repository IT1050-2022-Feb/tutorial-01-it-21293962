/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  printf( "Enter the desired number: " ); // prompt
  scanf( "%d", &number ); // input

  for ( int i = 1; i <= number; i++ )
  {
    sum = sum + i;
  } // Repetition statement for calculation
  
  printf( "sum = %d", sum ); // output
  return 0;
}

