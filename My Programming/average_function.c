#include<stdio.h>
float average(int,int,int);
float avrg;
main()
{
    int x,y,z;
    char sw;
    L1:printf("Do you want to get average of three numbers?...if yes then press 'Y' or 'y'\n");
    scanf(" %c",&sw);
    printf("\n");
    switch(sw){
        case 'Y':
            printf("Enter three numbers:\n");
            scanf("%d %d %d",&x,&y,&z);
            average(x,y,z);
            printf("The average of those three numbers is: %f\n",avrg);
            printf("\n");
            goto L1;
            break;
        case 'y':
            printf("Enter three numbers:\n");
            scanf("%d %d %d",&x,&y,&z);
            average(x,y,z);
            printf("The average of those three numbers is: %f\n",avrg);
            printf("\n");
            goto L1;
            break;
        default:
            break;
    }

}

float average(int a,int b,int c){
    avrg=(a+b+c)/3;
    return avrg;
}
