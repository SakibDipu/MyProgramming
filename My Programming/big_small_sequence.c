#include<stdio.h>
main()
{
    int i,j,n,x[100],pos[100],counter=0,similar=0,done_similar,ps;
    /*pos[100] variable is declared so that we can save the
    position of a number in it*/
    printf("How many numbers do you want to compare:\n");
    scanf("%d",&n);

    printf("Enter the numbers:\n");
    for(i=0; i<n; i++){
        scanf("%d",&x[i]);
    }

    for(i=0; i<n; i++){
        if(x[i]!=done_similar){
            for(j=0; j<n; j++){
                if(x[i]>x[j]){
                    counter=counter+1; /*here we have taken an individual number and counted it is big than how many numbers*/
                }
                if(x[i]==x[j] && i!=j){
                    similar=similar+1;
                    done_similar=x[i];
                }
            }
            //printf("%d %d\n",similar,done_similar);
            pos[counter]=x[i];
            if(similar>0){
                for(ps=1; ps<=similar; ps++){
                    counter=counter+1;
                    pos[counter]=x[i];
                }
        }
        }

         /*here the logic is:if a number is bigger then two numbers then its
        position is third means pos[2]...similarly if it is bigger than three numbers then its position is fourth means pos[3]*/
        counter=0;
        similar=0;
    }
    for(i=n-1; i>=0; i--){
        printf("%d ",pos[i]); //here we have just printed the numbers from biggest to smallest
    }

}
