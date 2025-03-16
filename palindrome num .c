#include<stdio.h>
int main()
{
int a,b,c,d;
scanf("%d",&a);
b=a;
while(a!=0)
{
c=a%10;
d=d*10 +c;
a=a/10;
}
if(b==d)
{
printf("Yes");
}
else {
printf("No");
}
return 0;
}
