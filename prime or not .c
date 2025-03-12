#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
for (int i=2;i<=a/2;i++)
{
if(a%i==0)
{
b+=1;
breack;
}
}
if(b==0)
{
printf("Prime num");
}
else {
printf("Not a Prime num);
}
return 0;
}
