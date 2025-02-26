#include<stdio.h>
int main()
{
    int a,temp,r,rev=0,b;
scanf("%d",&a);
temp=a;
while(temp!=0)
{
r=temp%10;
temp=temp/10;
rev=rev*10+r;
}
while(rev!=0)
{
b=rev%10;
rev=rev/10;
if(b%2==0)
{
printf("0");
}
else
{
printf("%d",b);
}

}
    return 0;
}

    
