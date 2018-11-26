#include<stdio.h>
int main(){
          int i,j,x,n,add,multi;
          add=0;
          multi=1;
          printf("how many numbers do you want to input?\n");
          scanf("%d",&n);
          for(i=1; i<=n; i++){
                            printf("Enter the %d th number\n",i);
                            scanf("%d",&x);
                            if(x%2==0){
                                     add=add+x;
                                     }else{
                                     multi=multi*x;
                                     }


                           }
               printf("The addition of even numbers is %d\n",add);
          printf("The multiplication of odd numbers is %d\n",multi);

           return 0;
}





