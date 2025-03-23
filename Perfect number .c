#include<stdio.h>
int main()
{
int n,sum=1;
scanf("%d",&n);
if(n<=1)
{
printf("Not Perfect Number");
}
for(int i=2;i*i<=n;i++)
{
if(n%i==0)
{ sum+=i;
if(i!=n/i)
{
sum+=n/i;
}
}
}
if(sum==n)
{
printf("Perfect Number");
}
else
{
printf("Not Perfect Number");
}
return 0;
}
