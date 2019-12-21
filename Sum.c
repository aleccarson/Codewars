#include <stdio.h>
#include <stdlib.h>

int get_sum(int a , int b) 
{ 
    int sum = 0;
    
   // if a and b are equal return either one
    if(a == b)
     return a;
    
    // case for a being larger than b
    if(a > b)
    {
      // get all numbers in between b and a
      for(int i = a; i >= b; i--)
        sum += i;
    }

   // case for b being larger than a 
    if(a < b)
    {
        // gets all numbers between a and b
      for(int i = b; i >= a; i--)
        sum += i;
    }

    return sum;
}

int main(void)
{
    get_sum(9, 10);
}