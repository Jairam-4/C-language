#include<stdio.h>
void jai(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
jai(&a,&b);
    printf("%d\n%d\n",a,b);
return 0;
}
