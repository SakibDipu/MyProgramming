#include<stdio.h>
int main()
{
    int array[5] = {1,2,3,4,5},mid_element = 2,i,j = 4,p;
    for(i=0; i<5; i++){
            p = array[i];
            array[i] = array[j];
            array[j] = p;
            j--;
            printf("%d ",array[i]);
    }
}
