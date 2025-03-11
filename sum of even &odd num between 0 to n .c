#include<stdio.h>
int main()
{
int a,b=0,c=0;
scanf("%d",&a);
for (int i=0;i<=a;i++)
{
if(i%2==0)
{
printf( "even =%d\n",i);
b+=i;
} 
else {
c+=i;
printf("odd=%d\n",i);
}

}
printf("even sum b/n %d is %d",a,b);
printf("\n Odd even sum b/n%d is %d",a,c);
return 0;
}
