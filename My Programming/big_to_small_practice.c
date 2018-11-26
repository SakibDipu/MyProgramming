#include<stdio.h>
main()
{
    int i,j,n,x[100],pos[100],counter=0,ps=0,similar=0,done_similar;
    printf("How many numbers do you want to compare?\n");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    for(i=0; i<n; i++){
        scanf("%d",&x[i]);
    }
    for(i=0; i<n; i++){
        if(x[i]!=done_similar){
            for(j=0; j<n; j++){
                if(x[i]>x[j]){
                    counter=counter+1;
                }
                if(x[i]==x[j] && i!=j){
                    similar=similar+1;
                    done_similar=x[i];
                }
            }
            pos[counter]=x[i];
            if(similar>0){
                for(ps=1; ps<=similar; ps++){
                    counter=counter+1;
                    pos[counter]=x[i];
                }
            }
        }
        counter=0;
        similar=0;
    }
    printf("The new sequence:\n");
    for(i=n-1; i>=0; i--){
        printf("%d ",pos[i]);
    }
}

