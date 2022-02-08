/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) {

  int mark_1;
  int mark_2;
  float avg;

  printf("enter the mark_1: ");
  scanf("%d",& mark_1);

  printf("enter the mark_2: ");
  scanf("%d",& mark_2);

avg=((mark_1+mark_2)/2);

printf("the average mark is: %.2f", avg);
  
  
  return 0;
}

