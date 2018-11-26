#include<stdio.h>
int main()
{
    float a,sum;
    int counter_valid=0,counter=0,x=0,s;
    scanf("%f",&a);
    while(x!=2){
        if(a<0 || a>10){
            printf("nota invalida\n");
        }else{
            sum = sum + a;
            counter = counter + 1;
            counter_valid = counter_valid + 1;
        }
        if(counter_valid == 2){
            printf("media = %.2f\n",sum/(float)counter);
            scanf("%d",&x);
            if(x!=2){
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d",&s);
                if(s == 1){
                    printf("novo calculo (1-sim 2-nao)\n");
                }
            }
            counter_valid = 0;
        }
        if(x!=2){
            scanf("%f",&a);
        }
    }
    return 0;
}
