#include<stdio.h>
int main()
{
    int i,n,x[100],j,sum=0,y;
    printf("Enter a decimal number:\n");
    scanf("%d",&n);
    y = 0;
    L1:n = n;
    y = y + 1;
    if(y==1){
        while(n/2!=0){
        n = n/2;
        sum = sum+1;
        }
    }
    goto L1;
    for(i=0; i<=sum ;i++){
        x[i] = n%2;
        n = n/2;
    }
    for(i=sum; i>=0 ;i--){
        printf("%d",x[i]);
    }
    return 0;
}
