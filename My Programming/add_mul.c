#include <stdio.h>
int main()
{
    int i,x,n,add,mul;
    add =0;
    mul=1;
    printf("How many numbers do you want as input?\n");
    scanf("%d",&n);
for(i=1;i<=n;i++){
    printf("Enter the %dth number:\n",i);
    scanf("%d",&x);
if(x%2==0){
    add=add+x;
}else{
    mul=mul*x;
}
}
if(x%2==0){
printf("The addition of those numbers is %d\n",add);
}else if(x%2!=0){
printf("The multiplication of those numbers is %d\n",mul);
}else{
printf("The addition of those numbers is %d\n",add);
printf("The multiplication of those numbers is %d\n",mul);
}
return 0;
}
