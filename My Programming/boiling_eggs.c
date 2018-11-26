#include<stdio.h>
main()
{
    int i,j,t,n[30],p[30],q[30],weight[100][30],counter=0,sum_of_weight=0,final_counter=0;
    scanf("%d",&t);
    for(i=0; i<t; i++){
        scanf("%d",&n[i]);
        scanf("%d",&p[i]);
        scanf("%d",&q[i]);
        for(j=0; j<n[i]; j++){
            scanf("%d",&weight[i][j]);
        }
    }
    for(i=0; i<t; i++){
        for(j=0; j<n[i]; j++){
            sum_of_weight=sum_of_weight+weight[i][j];
            counter=counter+1;
            if(counter<=p[i] && sum_of_weight<=q[i]){
                final_counter=counter;
            }
        }
        printf("Case %d: %d",i+1,final_counter);
        printf("\n");
        sum_of_weight=0;
        counter=0;
        final_counter=0;
    }

}
