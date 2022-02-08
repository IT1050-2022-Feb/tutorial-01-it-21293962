/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

##include <stdio.h>

int distance;
int rate;
int amount; 

int main() {

  printf( "Enter the distance the van has travelled: " ); // prompt
  scanf( "%d", &distance ); // input

  if( distance <= 30 && distance >= 0 )
  {
    amount = distance * 50;
  } // end of if statement for the below 30 km trips
    else if( distance >= 30 )
    {
      amount = 30 * 50 + ( distance - 30 ) * 40;
    } // end of if statement for the above 30 km trips
      else
      {
        amount = 0;
        printf( "Error!!!\n" );
      } // end of condition for the error inputs

  printf( "Amount to be paid for the rented vehicle: %d", amount );
  
  return 0;
}
