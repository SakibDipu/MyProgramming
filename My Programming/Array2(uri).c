#include<stdio.h>
int main()
{
    int i,j,max,min,n,array[100][100],number,col,counter;
    scanf("%d",&n);
    while(n != 0){
        for(i=1; i<=n; i++){
            max = i;
            number  = 1;
            for(j=1; j<=n; j++){
                array[i][j] = number;
                if(i == 1){
                    number++;
                }else{
                    if(j == 1){
                        col = max;
                        counter = 1;
                    }
                    if(counter<=max){
                        array[i][j] = array[1][col];
                        if(counter<max){
                            col--;
                        }
                        counter++;
                    }else{
                        col++;
                        array[i][j] = array[1][col];
                    }
                }
                if(j == n){
                    printf("%d",array[i][j]);
                }else{
                    printf("%d ",array[i][j]);
                }
            }
            printf("\n");
        }
        scanf("%d",&n);
    }
    return 0;
}
