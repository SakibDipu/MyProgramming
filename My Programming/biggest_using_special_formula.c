#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,big1,big2;
    scanf("%d%d%d",&a,&b,&c);
    big1 = (a+b+abs(a-b))/2;
    big2 = (big1+c+abs(big1-c))/2;
    printf("%d eh o maior\n",big2);
    return 0;
}
