#include<stdio.h>
int power(int n,int p)
{
    int res=1,i;
    for(i=1;i<=p;i++)
    {
     res=res*n;
    }
    return res;

}
int main()
{
    int i,n,j,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+power(i,i);
    }

  printf("%d",sum);
}
