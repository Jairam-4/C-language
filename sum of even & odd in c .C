#include<stdio.h>
int main()
{
int a,b=0,c=0,d;
scanf("%d",&a);
while(a!=0)
{
d=a%10;
if(d%2==0)
{ b+=d;}
else { c+=d;}
a=a/10;
}
printf("%d %d",b,c);
return 0;
}

