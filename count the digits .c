#include<stdio.h>
int main()
{
int a,r,count=0;
scanf("%d",&a);
while(a!=0)
{
r=a%10;
a=a/10;
count +=1;
}
printf("The digits in the number is =%d",count);
return 0;
}
