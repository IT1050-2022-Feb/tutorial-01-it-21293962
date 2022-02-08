int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}
int minimum( int no1, int no2 )
{
  int min;

  if( no1 < no2 )
  {
    min = no1;
  } 
   else if( no2 < no1 )
   {
     min = no2;
   }
    else
    {
      printf( "Numbers are equal " );
    }

  return min;

} // end of implementing function minimum

int maximum( int no1, int no2 )
{
  int max;

  if( no1 > no2 )
  {
    max = no1;
  } 
   else if( no2 > no1 )
   {
     max = no2;
   }
    else
    {
      printf( "Numbers are equal " );
    }

  return max;

}  // end of implementing function maximum

int multiply( int no1, int no2 )
{
  int mul;

  mul = no1 * no2;

  return mul;

}  // end of implementing function multiply