#include<stdio.h>
int main()
{
    int i,j,n,x[20][100],sub,div,m[20],arith=0,geo=0;
    printf("How many times do you want to test?\n");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        printf("How many numbers do you want to give in the %dth series?\n",i+1);
        scanf("%d",&m[i]);
        printf("Enter the numbers  of the series sequentially:\n");
        for(j=0; j<m[i]; j++){
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<m[i]; j++){
            sub=x[i][1]-x[i][0];
            if(x[i][0]!=0){
            /*because if x[i][0]==0 then something by zero will infinity
            and program will stop running*/
                div=x[i][1]/x[i][0];
            }
            if(x[i][j+1]-x[i][j]==sub){
                arith=arith+1;//counting how many times the sub is same and putting it on arith variable//
            }
            if(x[i][j]!=0){
                if(x[i][j+1]/x[i][j]==div){
                geo=geo+1;
                }
            }

        }
        if(arith==m[i]-1 && geo!=m[i]-1){ /*m[i] is the number of total numbers in that series....*/
            printf("ARITHMATIC\n");        /*let m[i] be 3 and the numbers 2 4 6,its a arithmatic series and so you will get same sub 2 times that is m[i]-1 times*/
        }else if(arith!=m[i]-1 && geo==m[i]-1){
            printf("GEOMATRIC\n");              //same with the geomatric//
        }else if(arith==m[i]-1 && geo==m[i]-1){
            printf("BOTH\n");
        }else{
            printf("NONE\n");
        }
        arith=0;
        geo=0;
        printf("\n");
    }

}
