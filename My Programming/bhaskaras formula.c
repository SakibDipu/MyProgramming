#include<stdio.h>
int main()
{
    int i,counter = 0;
    float x[6];
    for(i=0; i<6; i++){
        scanf("%f",&x[i]);
    }
    for(i=0; i<6; i++){
        if(x[i]>0){
            counter=counter+1;
        }
    }
    printf("%d valores positivos\n",counter);
    return 0;
}
