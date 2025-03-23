#include<stdio.h>
int main()
{
int n,fc=0;
scanf("%d",&n);
if(n<=1)
{
printf("NO");
return 1;
}
for(int i=2;i<=n/2;i++)
{
if(n%i==0)
{
fc=1;
break;
}
}
if(fc==0)
{
printf("YES");
}
else
{
printf("NO");
}
return 0;
}
