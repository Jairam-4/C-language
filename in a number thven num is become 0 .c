#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        if(b%2==0)
        {
            printf("0");
        }
        else {
            printf("%d",b);
        }
        
    }
}
