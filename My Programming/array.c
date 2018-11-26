#include <stdio.h>
int main()
{
    double n[5]={33.5,56,67,89,35.5};
    int roll;
for(roll=1;roll<=5;roll++){
    printf("roll=%d marks=%lf\n",roll,n[roll-1]);


}
    return 0;



}
