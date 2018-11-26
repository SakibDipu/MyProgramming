#include<stdio.h>
int main()
{
    int i,j,x[20][100],biggest,smallest,n,m,counter[100];
    printf("How many lines do you want?\n");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        printf("How many inputs do you want in the %dth line?\n",i+1);
        scanf("%d",&m);
        counter[i]=m;
        for(j=0; j<m ;j++){
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0; i<n ;i++){
        biggest=x[i][0];
        for(j=0; j<counter[i]; j++){
            if(x[i][j]>biggest){
                biggest=x[i][j];
            }
        }
        printf("In the %dth line biggest=%d ",i+1,biggest);
        smallest=x[i][0];
        for(j=0; j<counter[i]; j++){
            if(x[i][j]<smallest){
                smallest=x[i][j];
            }
        }
        printf("and smallest=%d",smallest);
        printf("\n");
    }
    return 0;

}
