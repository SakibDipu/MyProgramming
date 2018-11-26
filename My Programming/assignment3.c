#include <stdio.h>
int main()
{
    int x,y,z,sum,sum1;
    y = x+2;
    z = y+2;
    sum = 0;
    sum1 =x*y*y*z*z*z;

    for(x = 1;x <= 25;x = x+4){

         sum = sum + sum1;
    }
    printf("The result is %d:\n",sum);

    return 0;
}
