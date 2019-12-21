#include <stdio.h>
#include<stdlib.h>

int bouncingBall(double h, double bounce, double window) 
{ 
    int count = 0;
    
    // checks if 3 conditions are met 
    if(h <= 0 || bounce < 0 || bounce > 1 || window > h)
        return -1;
    
    // loop for counting how many times ball is seen (optimize algorithm)
    while(h > window)
    {
        ++count;
        printf("%f\n", h);
        // calculate new height after consecutive bounces
        h = bounce * h;
        count++;
    } 
    // return count
    return count - 1;
}

// driver function for testing
int main(void)
{
    bouncingBall(90, .66, 1.5);

    return 0;
}